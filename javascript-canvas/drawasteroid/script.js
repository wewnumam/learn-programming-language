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

function draw_asteroid(ctx, radius, segments, options) {
    options = options || {};
    ctx.strokeStyle = options.stroke || "white";
    ctx.fillStyle = options.fill || "black";
    ctx.save();
    ctx.beginPath();
    for (let i = 0; i < segments; i++) {
        ctx.rotate(2 * Math.PI / segments);
        ctx.lineTo(radius, 0);
    }
    ctx.closePath();
    ctx.fill();
    ctx.stroke();
    if (options.guide) {
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.arc(0, 0, radius, 0, 2 * Math.PI);
        ctx.stroke();
    }
    ctx.restore();
}

// BASIC SHAPE
// let segments = 1
// for (let x = 0.25; x < 1; x += 0.5) {
//     for (let y = 0.25; y < 1; y += 0.5) {
//         segments += 2;
//         context.save();
//         context.translate(context.canvas.width * x,
//             context.canvas.height * y);
//         draw_asteroid(context, 60, segments, {
//             guide: true
//         });
//         context.restore();
//     }
// }

function draw_asteroid(ctx, radius, segments, options) {
    options = options || {};
    ctx.strokeStyle = options.stroke || "white";
    ctx.fillStyle = options.fill || "black";
    ctx.save();
    ctx.beginPath();
    for (let i = 0; i < segments; i++) {
        ctx.rotate(2 * Math.PI / segments);
        // //A simplistic approach - we don't want totally random
        // ctx.lineTo(radius * Math.random(), 0);

        // //This is much better, only a bit random
        // ctx.lineTo(radius * 0.8 + radius * 0.4 * Math.random(), 0);

        //This is neat, configurable and keeps the radius about right
        ctx.lineTo(radius + radius * options.noise * (Math.random() - 0.5), 0);
    }
    ctx.closePath();
    ctx.fill();
    ctx.stroke();
    if (options.guide) {
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.arc(0, 0, radius, 0, 2 * Math.PI);
        ctx.stroke();
    }
    ctx.restore();
}

// ADD RANDOMNESS
// var segments = 15,
//     noise = 0.4;
// for (let x = 0.1; x < 1; x += 0.2) {
//     for (let y = 0.1; y < 1; y += 0.2) {
//         context.save();
//         context.translate(context.canvas.width * x, context.canvas.height * y);
//         draw_asteroid(context, context.canvas.width / 12, segments, {
//             noise: noise,
//             guide: true
//         });
//         context.restore();
//     }
// }

function draw_asteroid(ctx, radius, shape, options) {
    options = options || {};
    ctx.strokeStyle = options.stroke || "white";
    ctx.fillStyle = options.fill || "black";
    ctx.save();
    ctx.beginPath();
    for (let i = 0; i < shape.length; i++) {
        ctx.rotate(2 * Math.PI / shape.length);
        ctx.lineTo(radius + radius * options.noise * shape[i], 0);
    }
    ctx.closePath();
    ctx.fill();
    ctx.stroke();
    if (options.guide) {
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.arc(0, 0, radius, 0, 2 * Math.PI);
        ctx.stroke();
        ctx.beginPath();
        ctx.lineWidth = 0.2;
        ctx.arc(0, 0, radius + radius * options.noise, 0, 2 * Math.PI);
        ctx.stroke();
        ctx.beginPath();
        ctx.arc(0, 0, radius - radius * options.noise, 0, 2 * Math.PI);
        ctx.stroke();
    }
    ctx.restore();
}

// STORING BASIC SHAPE
var segments = 15,
    noise = 0;
var shape = [];
for (var i = 0; i < segments; i++) {
    shape.push(2 * (Math.random() - 0.5));
}
for (let y = 0.1; y < 1; y += 0.2) {
    for (let x = 0.1; x < 1; x += 0.2) {
        context.save();
        context.translate(context.canvas.width * x,
            context.canvas.height * y);
        draw_asteroid(context, context.canvas.width / 16, shape, {
            noise: noise,
            guide: true
        });
        context.restore();
        noise += 0.025;
    }
}