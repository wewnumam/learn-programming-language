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

function update(elapsed) {
    asteroids.forEach(function (asteroid) {
        asteroid.update(elapsed);
    });
}

function draw(ctx, guide) {
    if (guide) {
        draw_grid(ctx);
    }
    asteroids.forEach(function (asteroid) {
        asteroid.draw(context, guide);
    });
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

function Asteroid(segments, radius, noise) {
    this.x = context.canvas.width * Math.random();
    this.y = context.canvas.height * Math.random();
    this.angle = 0;
    this.x_speed = context.canvas.width * (Math.random() - 0.5);
    this.y_speed = context.canvas.height * (Math.random() - 0.5);
    this.rotation_speed = 2 * Math.PI * (Math.random() - 0.5);
    this.radius = radius;
    this.noise = noise;
    this.shape = [];
    for (let i = 0; i < segments; i++) {
        this.shape.push(Math.random() - 0.5);
    }
}

var asteroids = [
    new Asteroid(24, 50, 0.2),
    new Asteroid(24, 50, 0.5),
    new Asteroid(5, 50, 0.2)
];

Asteroid.prototype.update = function (elapsed) {
    if (this.x - this.radius + elapsed * this.x_speed > context.canvas.width) {
        this.x = -this.radius;
    }
    if (this.x + this.radius + elapsed * this.x_speed < 0) {
        this.x = context.canvas.width + this.radius;
    }
    if (this.y - this.radius + elapsed * this.y_speed > context.canvas.height) {
        this.y = -this.radius;
    }
    if (this.y + this.radius + elapsed * this.y_speed < 0) {
        this.y = context.canvas.height + this.radius;
    }
    this.x += elapsed * this.x_speed;
    this.y += elapsed * this.y_speed;
    this.angle = (this.angle + this.rotation_speed * elapsed) % (2 * Math.PI);
}

Asteroid.prototype.draw = function (ctx, guide) {
    ctx.save();
    ctx.translate(this.x, this.y);
    ctx.rotate(this.angle);
    draw_asteroid(ctx, this.radius, this.shape, {
        guide: guide,
        noise: this.noise
    });
    ctx.restore();
}