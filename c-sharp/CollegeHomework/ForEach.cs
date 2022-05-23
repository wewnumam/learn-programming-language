namespace CollegeHomework 
{
    class ForEach 
    {
        public ForEach() 
        {
           string[] emojis = {"👍", "🙏", "😂", "❤️", "😯"};

            int i = 1;
            foreach (var emoji in emojis)
            {
                System.Console.WriteLine(
                    String.Format("Emoji ke-{0}: {1}", i, emoji));
                i++;
            }
        }
    }
}