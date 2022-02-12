using System;

namespace test
{
    class CSRandom
    {
        public CSRandom()
        {
            Random random = new Random();
            int num = random.Next(1, 7);
            Console.WriteLine(num);
        }
    }
}