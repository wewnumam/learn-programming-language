using System;

namespace test
{
    class Generic
    {
        public Generic()
        {
            int[] intArray = {1,2,3};
            double[] doubleArray = {1.0,2.0,3.0};
            String[] stringArray = {"1","2","3"};

            displayElements(intArray);
            displayElements(doubleArray);
            displayElements(stringArray);
        }

        public void displayElements<T>(T[] array)
        {
            foreach (T item in array)
            {
                System.Console.Write(item + " ");
            }
            System.Console.WriteLine();
        }

        // public void displayElements(int[] array)
        // {
        //     foreach (int item in array)
        //     {
        //         System.Console.Write(item + " ");
        //     }
        //     System.Console.WriteLine();
        // }

        // public void displayElements(double[] array)
        // {
        //     foreach (double item in array)
        //     {
        //         System.Console.Write(item + " ");
        //     }
        //     System.Console.WriteLine();
        // }

        // public void displayElements(String[] array)
        // {
        //     foreach (String item in array)
        //     {
        //         System.Console.Write(item + " ");
        //     }
        //     System.Console.WriteLine();
        // }
    }
}