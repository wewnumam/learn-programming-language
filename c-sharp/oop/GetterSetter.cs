using System;

namespace oop
{
    class GetterSetter
    {
        public GetterSetter()
        {
            Car4 car = new Car4(400);
            car.Speed = 1000;
            System.Console.WriteLine(car.Speed);
        }
    }

    class Car4
    {
        // private int speed;
        public int Speed {get; set;}
        public Car4(int speed)
        {
            // this.speed = speed;
            this.Speed = speed;
        }

        // public int Speed
        // {
        //     get {return this.speed;}

        //     set
        //     {
        //         if (value > 500)
        //         {
        //             this.speed = 500;
        //         } else {
        //             this.speed = value;
        //         }
        //     }
        // }
    }
}