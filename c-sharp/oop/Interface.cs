using System;

namespace oop
{
    class Interface
    {
        public Interface()
        {
            Rabbit rabbit = new Rabbit();
            Hawk hawk = new Hawk();
            Fish fish = new Fish();

            hawk.Hunt();
            rabbit.Flee();
            fish.Hunt();
            fish.Flee();
        }
    }

    interface IPrey
    {
        void Flee();
    }

    interface IPredator
    {
        void Hunt();
    }

    class Rabbit : IPrey 
    {
        public void Flee()
        {
            System.Console.WriteLine("The rabbit runs away!");
        }
    }

    class Hawk : IPredator
    {
        public void Hunt()
        {
            System.Console.WriteLine("The hawk is searching for food!");
        }
    }

    class Fish : IPrey, IPredator
    {
        public void Flee()
        {
            System.Console.WriteLine("The fish runs away!");
        }

        public void Hunt()
        {
            System.Console.WriteLine("The fish is searching for food!");
        }
    }
}