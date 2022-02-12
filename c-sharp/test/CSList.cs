using System;
using System.Collections.Generic;

namespace test
{
    class CSList
    {
        public CSList()
        {
            // String[] food = new String[3];
            // food[0] = "pizza";
            // food[1] = "hamburger";
            // food[2] = "hotdog";
            // food[3] = "fries";

            List<String> food = new List<String>();
            food.Add("pizza");
            food.Add("hamburger");
            food.Add("hotdog");
            food.Add("fries");
            // System.Console.WriteLine(food[0]);
            // food.Remove("fries");
            // food.Insert(0, "sushi");
            // System.Console.WriteLine(food.Count);
            // System.Console.WriteLine(food.IndexOf("pizza"));
            // food.Add("fries");
            // System.Console.WriteLine(food.LastIndexOf("fries"));
            // System.Console.WriteLine(food.Contains("pizza"));
            // food.Sort();
            // food.Reverse();
            // food.Clear();
            String[] foodArray = food.ToArray();

            foreach (String item in food)
            {
                System.Console.WriteLine(item);
            }
        }
    }
}