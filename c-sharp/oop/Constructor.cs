using System;

namespace oop
{
    class Constructor
    {
        public Constructor()
        {
            Pet pet = new Pet("Pet", 65);
            pet.Eat();
            pet.Sleep();
            pet.getAge();
        }
    }

    class Pet
    {
        private string name;
        private int age;

        public Pet(string name, int age)
        {
            this.name = name;
            this.age = age;
        }
        public void Eat()
        {
            Console.WriteLine(this.name + " is eating");
        }

        public void Sleep()
        {
            Console.WriteLine(this.name + " is sleeping");
        }

        public void getAge()
        {
            Console.WriteLine($"{this.name} is {this.age} years old");
        }
    }
}