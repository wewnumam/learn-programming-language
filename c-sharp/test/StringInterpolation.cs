using System;

namespace test
{
    class StringInterpolation
    {
        public StringInterpolation()
        {
            String firstName = "Bro";
            String lastName = "Code";
            int age = 21;

            // Console.WriteLine("Hello " + firstName + " " + lastName);
            // Console.WriteLine("You are " + age + " years old");

            Console.WriteLine($"Hello {firstName} {lastName}");
            Console.WriteLine($"You are {age, -10} years old");
        }
    }
}