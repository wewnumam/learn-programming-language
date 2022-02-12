using System;

namespace oop
{
    class Polymorphism
    {
        public Polymorphism()
        {
            Car3 car = new Car3();
            Bicycle3 bicycle = new Bicycle3();
            Boat3 boat = new Boat3();
            
            Vehicle3[] vehicles = {car, bicycle, boat};

            foreach (Vehicle3 vehicle in vehicles)
            {
                vehicle.Go();
            }
        }
    }

    class Vehicle3
    {
        public virtual void Go() {

        }
    }

    class Car3 : Vehicle3
    {
        public override void Go()
        {
            System.Console.WriteLine("The car is moving!");
        }
    }

    class Bicycle3 : Vehicle3
    {
        public override void Go()
        {
            System.Console.WriteLine("The bicylce is moving!");
        }
    }

    class Boat3 : Vehicle3
    {
        public override void Go()
        {
            System.Console.WriteLine("The boat is moving!");
        }
    }
}