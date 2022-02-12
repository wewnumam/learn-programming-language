using System;

namespace test
{
    class Input
    {
        public Input()
        {
            Console.Write("input\t: ");
            int input = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("output\t: " + input);
            Console.WriteLine("type\t: " + input.GetType());
        }
    }
}