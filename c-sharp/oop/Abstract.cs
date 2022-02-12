using System;

namespace oop
{
    class Abstract
    {
        public Abstract()
        {
            Car2 car = new Car2();
            Bicycle2 bicycle = new Bicycle2();
            Boat2 boat = new Boat2();
            // Vehicle2 vehicle = new Vehicle2();
        }
    }

    abstract class Vehicle2
    {
        public int speed = 0;

        public void go()
        {
            System.Console.WriteLine("This vehicle is moving!");
        }
    }

    class Car2 : Vehicle2
    {
        public int wheels = 4;
    }

    class Bicycle2 : Vehicle2
    {
        public int wheels = 2;
    }

    class Boat2 : Vehicle2
    {
        public int wheels = 0;
    }
}