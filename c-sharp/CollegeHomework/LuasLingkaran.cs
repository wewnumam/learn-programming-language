using System;

namespace CollegeHomework
{
    class LuasLingkaran
    {
        public LuasLingkaran()
        {
            double jariJari, luas;

            System.Console.Write("Masukkan jari-jari: ");
            jariJari = Convert.ToDouble(Console.ReadLine());

            luas = Math.PI * Math.Pow(jariJari, 2);

            System.Console.WriteLine(
                String.Format("Luas lingkaran: {0:N2}", luas));
        }
    }
}