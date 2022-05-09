namespace CollegeHomework 
{
    class Array2D 
    {
        public Array2D() 
        {
            String[] mamalia = {"sapi", "kucing", "kerbau", "macan"};

            foreach (var m in mamalia)
            {
                System.Console.WriteLine(m);
            }

            String[,] mahasiswaLahir = {
                {"Si A", "Si B", "Si C", "Si D"},
                {"01-01-2022", "02-02-2022", "03-03-2022", "04-04-2022"}};

            for (int i = 0; i < 4; i++)
            {
                System.Console.WriteLine(
                    mahasiswaLahir[0,i] + ", " + mahasiswaLahir[1, i]);
            }

            String[,] mahasiswaKota = {
                {"Si A", "Si B", "Si C"},
                {"Ambarawa", "Bandung", "Cimahi"}};

            for (int i = 0; i < 3; i++)
            {
                System.Console.WriteLine(
                    mahasiswaKota[0,i] + " - " + mahasiswaKota[1, i]);
            }

        }
    }
}