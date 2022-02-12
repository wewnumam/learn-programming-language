using System;

namespace test
{
    class CSMath
    {
        public CSMath()
        {
            double x = 0;

            // x = Math.Pow(3, 2); // pangkat
            // x = Math.Sqrt(9); // kuadrat
            // x = Math.Abs(-3); // absolut
            // x = Math.Round(3.14); // pembulatan
            // x = Math.Ceiling(3.14); // pembulatan ke atas
            // x = Math.Floor(3.14); // pembulatan ke bawah
            x = Math.Max(1, 2);

            Console.WriteLine(x);
        }
    }
}