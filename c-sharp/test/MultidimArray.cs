using System;

namespace test
{
    class MultidimArray
    {
        public MultidimArray()
        {
            int[] a = {1, 2, 3};
            int[] b = {4, 5, 6};
            int[] c = {7, 8, 9};

            int[,] nums = {{1,2,3}, {4,5,6}, {6,7,8}};

            nums[0,2] = 300;

            // foreach (var num in nums)
            // {
            //     Console.WriteLine(num);
            // }

            for (int i = 0; i < nums.GetLength(0); i++)
            {
                for (int j = 0; j < nums.GetLength(1); j++)
                {
                    Console.WriteLine(nums[i, j]);
                }
            }
        }
    }
}