using System;

namespace oop
{
    class Inheritance
    {
        public Inheritance()
        {
            Car car = new Car();
            Bicycle bicycle = new Bicycle();
            Boat boat = new Boat();

            System.Console.WriteLine(car.speed);
            System.Console.WriteLine(car.wheels);
            car.go();
        }
    }

    class Vehicle 
    {
        public int speed = 0;

        public void go()
        {
            System.Console.WriteLine("This vehicle is moving!");
        }
    }

    class Car : Vehicle
    {
        public int wheels = 4;
    }

    class Bicycle : Vehicle
    {
        public int wheels = 2;
    }

    class Boat
    {
        public int wheels = 0;
    }
}