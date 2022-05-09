namespace CollegeHomework 
{
    class SwitchCase 
    {
        public SwitchCase() 
        {
            System.Console.WriteLine("             _|\\ _/|_,");
            System.Console.WriteLine("           ,((\\\\``-\\\\\\\\_");
            System.Console.WriteLine("         ,(())      `))\\");
            System.Console.WriteLine("       ,(()))       ,_ \\");
            System.Console.WriteLine("      ((())'   |        \\");
            System.Console.WriteLine("      )))))     >.__     \\");
            System.Console.WriteLine("      ((('     /    `-. .c|");
            System.Console.WriteLine("              /        `-`'");
            System.Console.WriteLine("Masukkan satu huruf yang diambil dari nama binatang ini!");

            string? inputUser, status;

            System.Console.Write("input\t: ");
            inputUser =  System.Console.ReadLine();

            switch (inputUser)
            {
                case "k": status = "HURUF DITEMUKAN"; break;
                case "u": status = "HURUF DITEMUKAN"; break;
                case "d": status = "HURUF DITEMUKAN"; break;
                case "a": status = "HURUF DITEMUKAN"; break;
                default: status = "HURUF TIDAK DITEMUKAN"; break;
            }

            System.Console.WriteLine("status\t: " + status);
        }
    }
}