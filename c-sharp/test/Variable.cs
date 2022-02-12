using System;

namespace test
{
    class Variable
    {
        public Variable()
        {
            int x; // declaration
            x = 123; // initialization
            Console.WriteLine(x);
            
            double height = 300.5;
            Console.WriteLine(height);

            bool alive = true;
            Console.WriteLine(alive);

            char symbol = '@';
            Console.WriteLine(symbol);

            String name = "Bro";
            Console.WriteLine(name);

            const double pi = 3.14;
            Console.WriteLine(pi);
            
            int pi2 = Convert.ToInt32(pi);
            Console.WriteLine(pi2);

            var a = 10.5;
            Console.WriteLine(a.GetType());
        }
    }
}