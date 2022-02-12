using System;

namespace oop
{
    class Object
    {
        public Object()
        {
            Human human1 = new Human();
            human1.name = "Rick";
            human1.age = 65;
            human1.Eat();
            human1.Sleep();
            human1.getAge();
        }
    }

    class Human
    {
        public String name;
        public int age;
        public void Eat()
        {
            Console.WriteLine(name + " is eating");
        }

        public void Sleep()
        {
            Console.WriteLine(name + " is sleeping");
        }

        public void getAge()
        {
            Console.WriteLine($"{name} is {age} years old");
        }
    }
}