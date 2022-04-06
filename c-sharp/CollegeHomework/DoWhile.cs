using System;

namespace CollegeHomework 
{
    class DoWhile 
    {
        public DoWhile() 
        {
            int bilangan = -1;
            do 
            {
                System.Console.Write(bilangan + " ");
                bilangan = bilangan - 1;
            } while (bilangan >= -10);
            System.Console.WriteLine();
        }
    }
}