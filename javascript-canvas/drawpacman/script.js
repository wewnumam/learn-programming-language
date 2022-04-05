var canvas = document.getElementById("pacmania");
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


function draw_pacman(context, x, y, radius, start_angle) {
    context.beginPath();
    context.arc(x, y, radius, start_angle * Math.PI, 1.8 * Math.PI);
    context.lineTo(x, y);
    context.fillStyle = "yellow";
    context.fill();
}

var min_radius = 5;
var max_radius = 50;
do {
    let x = context.canvas.width * Math.random();
    let y = context.canvas.height * Math.random();
    let radius = min_radius + (max_radius - min_radius) * Math.
    random();
    draw_pacman(context, x, y, radius, Math.random());
}
while (Math.random() < 0.9);