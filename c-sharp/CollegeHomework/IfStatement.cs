using System;

namespace CollegeHomework
{
    class IfStatement
    {
        public IfStatement()
        {
            // SIM
            int usia;
            bool bolehMemperolehSIM;

            System.Console.Write("Masukkan usia: ");
            usia = Convert.ToInt32(Console.ReadLine());

            if (usia > 17)
                bolehMemperolehSIM = true;
            else
                bolehMemperolehSIM = false;

            System.Console.WriteLine(
                "Boleh memperoleh SIM: " + bolehMemperolehSIM);


            // Bilangan Genap
            int bilangan;
            bool bilanganAdalahGenap;

            System.Console.Write("\nMasukkan bilangan: ");
            bilangan = Convert.ToInt32(Console.ReadLine());

            if (bilangan % 2 == 0)
                bilanganAdalahGenap = true;
            else
                bilanganAdalahGenap = false;

            System.Console.WriteLine(
                "Bilangan adalah genap: " + bilanganAdalahGenap);
        }
    }
}