using System;

namespace CollegeHomework
{
    class ExplicitCasting
    {
        public ExplicitCasting()
        {
            int alas = 11;
            int tinggi = 21;
            float luas = (float) alas * tinggi / 2;

            System.Console.WriteLine(luas);
        }
    }
}