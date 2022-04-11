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

context.strokeStyle = "white";
context.lineWidth = 1.5;
let x = 0,
    y = context.canvas.height / 5,
    radius = 20;
let xspeed = 1.5,
    yspeed = 0,
    gravity = 0.1;
let mouth = 0;

function frame() {
    context.clearRect(0, 0, context.canvas.width, context.canvas.height);
    draw(context);
    update();
}

function update() {
    x += xspeed;
    y += yspeed;
    yspeed += gravity;
    if (y >= context.canvas.height - radius) {
        y = context.canvas.height - radius;
        // add an extra radius
        yspeed *= -0.6;
        // reverse and slow down
        xspeed *= 0.95;
        // just slow down a bit
    }
    if (x <= 0 || x >= context.canvas.width) {
        x = (x + context.canvas.width) % context.canvas.width;
    }
    mouth = Math.abs(Math.sin(6 * Math.PI * x / (context.canvas.width)));
}

function draw_pacman(ctx, radius, mouth) {
    angle = 0.2 * Math.PI * mouth;
    ctx.save();
    ctx.fillStyle = "yellow";
    ctx.strokeStyle = "black";
    ctx.lineWidth = 0.5;
    ctx.beginPath();
    ctx.arc(0, 0, radius, angle, -angle);
    ctx.lineTo(0, 0);
    ctx.closePath()
    ctx.fill();
    ctx.stroke();
    ctx.restore();
}

function draw(ctx) {
    draw_grid(ctx);
    // draw a simple circle
    // ctx.beginPath();
    // ctx.arc(x, y, radius, 0, 2 * Math.PI);
    // ctx.fill();
    // ctx.stroke();
    // or try this instead
    ctx.save();
    ctx.translate(x, y);
    draw_pacman(ctx, radius, mouth);
    ctx.restore();
}
setInterval(frame, 1000.0 / 60.0); // 60 fps