using System;

namespace oop
{
    class Overriding
    {
        public Overriding()
        {
            Dog dog = new Dog();
            Cat cat = new Cat();
            dog.speak();
            cat.speak();
        }
    }

    class Animal
    {
        public virtual void speak()
        {
            System.Console.WriteLine("The animal goes *brr*");
        }
    }

    class Dog : Animal
    {
        public override void speak()
        {
            System.Console.WriteLine("The dog goes *woof*");
        }
    }

    class Cat : Animal
    {
        public override void speak()
        {
            System.Console.WriteLine("The cat goes *meow*");
        }
    }
}