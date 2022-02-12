using System;

namespace test
{
    class ConditionalOperator
    {
        public ConditionalOperator()
        {
            double temperature = 20;
            String message = (temperature >= 5) ? "Warm" : "Cold";
            Console.WriteLine(message);
        }
    }
}