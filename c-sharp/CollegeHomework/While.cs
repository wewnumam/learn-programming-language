using System;

namespace CollegeHomework 
{
    class While 
    {
        public While() 
        {
            int bilangan = -1;
            while (bilangan >= -10)
            {
                System.Console.Write(bilangan + " ");
                bilangan = bilangan - 1;
            }
            System.Console.WriteLine();
        }
    }
}