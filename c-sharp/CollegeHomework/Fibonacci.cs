namespace CollegeHomework 
{
    class Fibonacci 
    {
        public Fibonacci() 
        {
            int n1, n2, nSelanjutnya;

            n1 = 0;
            n2 = 1;

            do
            {
                System.Console.Write(n1 + " ");
                nSelanjutnya = n1 + n2;
                n1 = n2;
                n2 = nSelanjutnya;
            } while (n1 <= 21);

            System.Console.WriteLine();
        }
    }
}