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

function draw(ctx, guide) {
    if (guide) {
        draw_grid(ctx);
    }
    ctx.save();
    ctx.translate(x, y);
    ctx.rotate(angle);
    draw_asteroid(ctx, radius, shape, {
        guide: guide,
        noise: noise
    });
    ctx.restore();
}

function update(elapsed) {
    if (x - radius + elapsed * x_speed > context.canvas.width) {
        x = -radius;
    }
    if (x + radius + elapsed * x_speed < 0) {
        x = context.canvas.
        width + radius;
    }
    if (y - radius + elapsed * y_speed > context.canvas.height) {
        y = -radius;
    }
    if (y + radius + elapsed * y_speed < 0) {
        y = context.canvas.
        height + radius;
    }
    x += elapsed * x_speed;
    y += elapsed * y_speed;
    angle = (angle + elapsed * rotation_speed) % (2 * Math.PI);
}

var previous, elapsed;

function frame(timestamp) {
    context.clearRect(0, 0, context.canvas.width, context.canvas.height);
    if (!previous) previous = timestamp;
    elapsed = timestamp - previous;
    update(elapsed / 1000);
    draw(context, true);
    previous = timestamp;
    window.requestAnimationFrame(frame);
}
window.requestAnimationFrame(frame);

// asteroid shape
var segments = 24;
var shape = [];
for (var i = 0; i < segments; i++) {
    shape.push(Math.random() - 0.5);
}
var radius = 50;
var noise = 0.2;

// asteroid state
var x = context.canvas.width * Math.random();
var y = context.canvas.height * Math.random();
var angle = 0;

// asteroid movement
var x_speed = context.canvas.width * (Math.random() - 0.5);
var y_speed = context.canvas.height * (Math.random() - 0.5);
var rotation_speed = 2 * Math.PI * (Math.random() - 0.5);