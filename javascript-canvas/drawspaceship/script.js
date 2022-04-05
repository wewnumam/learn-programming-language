var canvas = document.getElementById("asteroids");
var context = canvas.getContext("2d");

function draw_grid(ctx, minor, major, stroke, fill) {
    minor = minor || 10;
    major = major || minor * 5;
    stroke = stroke || "#00FF00";
    fill = fill || "#009900";

    ctx.save();

    ctx.strokeStyle = stroke;
    ctx.fillStyle = fill;

    let width = ctx.canvas.width,
        height = ctx.canvas.height

    for (var x = 0; x < width; x += minor) {
        ctx.beginPath();
        ctx.moveTo(x, 0);
        ctx.lineTo(x, height);
        ctx.lineWidth = (x % major == 0) ? 0.5 : 0.25;
        ctx.stroke();

        if (x % major == 0) {
            ctx.fillText(x, x, 10);
        }
    }

    for (var y = 0; y < height; y += minor) {
        ctx.beginPath();
        ctx.moveTo(0, y);
        ctx.lineTo(width, y);
        ctx.lineWidth = (y % major == 0) ? 0.5 : 0.25;
        ctx.stroke();

        if (y % major == 0) {
            ctx.fillText(y, 0, y + 10);
        }
    }

    ctx.restore();
}

draw_grid(context);

// DRAWING BASIC SHIP
function draw_ship(ctx, x, y, radius, options) {
    options = options || {};
    ctx.save();

    // optionally draw a guide showing the collision radius
    if (options.guide) {
        ctx.strokeStyle = "white";
        ctx.fillStyle = "rgba(0, 0, 0, 0.25)";
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.arc(x, y, radius, 0, 2 * Math.PI);
        ctx.stroke();
        ctx.fill();
    }

    // set some default values
    ctx.lineWidth = options.lineWidth || 2;
    ctx.strokeStyle = options.stroke || "white";
    ctx.fillStyle = options.fill || "black";
    let angle = (options.angle || 0.5 * Math.PI) / 2;

    // draw the ship in three lines
    ctx.beginPath();
    ctx.moveTo(x + radius, y);
    ctx.lineTo(
        x + Math.cos(Math.PI - angle) * radius,
        y + Math.sin(Math.PI - angle) * radius
    );
    ctx.lineTo(
        x + Math.cos(Math.PI + angle) * radius,
        y + Math.sin(Math.PI + angle) * radius
    );
    ctx.closePath();
    ctx.fill();
    ctx.stroke();
    ctx.restore();
}

// SETTING SHIP OPTION
// draw_ship(context, 200, 200, 150, {
//     guide: true
// });
// draw_ship(context, 75, 75, 50, {
//     stroke: 'gold',
//     fill: 'purple'
// });
// draw_ship(context, 325, 325, 50, {
//     angle: 0.8 * Math.PI,
//     guide: true
// });
// draw_ship(context, 75, 325, 50, {
//     angle: 0.3 * Math.PI,
//     guide: true
// });

// ROTATING THE CANVAS CONTEXT
// context.lineWidth = 0.5;
// context.strokeStyle = "white";
// let x = context.canvas.width * 0.9;
// let y = 0;
// let radius = context.canvas.width * 0.1;
// for (let r = 0; r <= 0.5 * Math.PI; r += 0.05 * Math.PI) {
//     context.save()
//     context.rotate(r);
//     draw_ship(context, x, y, radius, {
//         guide: true
//     });
//     context.beginPath();
//     context.moveTo(0, 0);
//     context.lineTo(x, 0);
//     context.stroke();
//     context.restore()
// }


// DRAW AT THE CURRENT ORIGIN
function draw_ship(ctx, radius, options) {
    options = options || {};
    ctx.save();
    if (options.guide) {
        ctx.strokeStyle = "white";
        ctx.fillStyle = "rgba(0, 0, 0, 0.25)";
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.arc(0, 0, radius, 0, 2 * Math.PI);
        ctx.stroke();
        ctx.fill();
    }
    ctx.lineWidth = options.lineWidth || 2;
    ctx.strokeStyle = options.stroke || "white";
    ctx.fillStyle = options.fill || "black";
    let angle = (options.angle || 0.5 * Math.PI) / 2;
    ctx.beginPath();
    ctx.moveTo(radius, 0);
    ctx.lineTo(
        Math.cos(Math.PI - angle) * radius,
        Math.sin(Math.PI - angle) * radius
    );
    ctx.lineTo(
        Math.cos(Math.PI + angle) * radius,
        Math.sin(Math.PI + angle) * radius
    );
    ctx.closePath();
    ctx.fill();
    ctx.stroke();
    ctx.restore();
}

// COMBINING ROTATE AND TRANSLATE
// let t = context.canvas.width / 20;
// let r = Math.PI / 500;
// context.translate(0, t);
// for (let i = 0; i <= 50; i++) {
//     context.rotate(i * r);
//     draw_ship(context, t, {
//         guide: true,
//         lineWidth: 1
//     });
//     context.translate(t, 0);
// }

// CONTROLLING VARIABLE
// let x, y, angle = 0;
// let w = context.canvas.width,
//     h = context.canvas.height
// for (y = h / 20; y < h; y += h / 10) {
//     for (x = w / 20; x < w; x += w / 10) {
//         context.save();
//         context.translate(x, y);
//         context.rotate(angle);
//         draw_ship(context, w / 30, {
//             guide: true,
//             lineWidth: 1
//         });
//         context.restore();
//         angle = (angle + 0.0075 * Math.PI);
//     }
// }

// USING QUADRATIC CURVES
function draw_ship(ctx, radius, options) {
    options = options || {};
    let angle = (options.angle || 0.5 * Math.PI) / 2;
    // this is new
    let curve = options.curve || 0.5;
    ctx.save();
    if (options.guide) {
        ctx.strokeStyle = "white";
        ctx.fillStyle = "rgba(0, 0, 0, 0.25)";
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.arc(0, 0, radius, 0, 2 * Math.PI);
        ctx.stroke();
        ctx.fill();
    }
    ctx.lineWidth = options.lineWidth || 2;
    ctx.strokeStyle = options.stroke || "white";
    ctx.fillStyle = options.fill || "black";
    ctx.beginPath();
    ctx.moveTo(radius, 0);
    ctx.lineTo(
        Math.cos(Math.PI - angle) * radius,
        Math.sin(Math.PI - angle) * radius
    ); // here we have added a control point based on the curve
    ctx.quadraticCurveTo(radius * curve - radius, 0,
        Math.cos(Math.PI + angle) * radius,
        Math.sin(Math.PI + angle) * radius
    );
    ctx.closePath();
    ctx.fill();
    ctx.stroke();
    // a new guide line and circle show the control point
    if (options.guide) {
        ctx.strokeStyle = "white";
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.moveTo(-radius, 0);
        ctx.lineTo(0, 0);
        ctx.stroke();
        ctx.beginPath();
        ctx.arc(radius * curve - radius, 0, radius / 50, 0, 2 * Math.PI);
        ctx.stroke();
    }
    ctx.restore();
}

// context.translate(200, 200);
// draw_ship(context, 150, {curve: Math.random(), guide: true});

// CURVY SHIPS
function draw_ship(ctx, radius, options) {
    options = options || {};
    let angle = (options.angle || 0.5 * Math.PI) / 2;
    // Now we have two curve arguments
    let curve1 = options.curve1 || 0.25;
    let curve2 = options.curve2 || 0.75;
    ctx.save();
    if (options.guide) {
        ctx.strokeStyle = "white";
        ctx.fillStyle = "rgba(0, 0, 0, 0.25)";
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.arc(0, 0, radius, 0, 2 * Math.PI);
        ctx.stroke();
        ctx.fill();
    }
    ctx.lineWidth = options.lineWidth || 2;
    ctx.strokeStyle = options.stroke || "white";
    ctx.fillStyle = options.fill || "black";
    ctx.beginPath();
    ctx.moveTo(radius, 0);
    // here we have the three curves
    ctx.quadraticCurveTo(
        Math.cos(angle) * radius * curve2,
        Math.sin(angle) * radius * curve2,
        Math.cos(Math.PI - angle) * radius,
        Math.sin(Math.PI - angle) * radius
    );
    ctx.quadraticCurveTo(-radius * curve1, 0,
        Math.cos(Math.PI + angle) * radius,
        Math.sin(Math.PI + angle) * radius
    );
    ctx.quadraticCurveTo(
        Math.cos(-angle) * radius * curve2,
        Math.sin(-angle) * radius * curve2,
        radius, 0
    );
    ctx.fill();
    ctx.stroke();
    // the guide drawing code is getting complicated
    if (options.guide) {
        ctx.strokeStyle = "white";
        ctx.fillStyle = "white";
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.moveTo(
            Math.cos(-angle) * radius,
            Math.sin(-angle) * radius
        );
        ctx.lineTo(0, 0);
        ctx.lineTo(
            Math.cos(angle) * radius,
            Math.sin(angle) * radius
        );
        ctx.moveTo(-radius, 0);
        ctx.lineTo(0, 0);
        ctx.stroke();
        ctx.beginPath();
        ctx.arc(
            Math.cos(angle) * radius * curve2,
            Math.sin(angle) * radius * curve2,
            radius / 40, 0, 2 * Math.PI
        );
        ctx.fill();
        ctx.beginPath();
        ctx.arc(
            Math.cos(-angle) * radius * curve2,
            Math.sin(-angle) * radius * curve2,
            radius / 40, 0, 2 * Math.PI
        );
        ctx.fill();
        ctx.beginPath();
        ctx.arc(radius * curve1 - radius, 0, radius / 50, 0, 2 * Math.PI);
        ctx.fill();
    }
    ctx.restore();
}

// context.translate(200, 200);
// draw_ship(context, 150, {
//     curve1: Math.random(),
//     curve2: Math.random(),
//     guide: true
// });

// DRAWING MULTIPLE VARIATION
let c1 = 0,
    c2 = 0;
for (c1 = 0.1; c1 < 1; c1 += 0.2) {
    for (c2 = 0.1; c2 < 1; c2 += 0.2) {
        context.save();
        context.translate(
            context.canvas.width * c1, context.canvas.height * c2);
        context.rotate(-Math.PI / 2);
        draw_ship(context, context.canvas.width / 12, {
            curve1: c1,
            curve2: c2,
            guide: true
        });
        context.restore();
    }
}