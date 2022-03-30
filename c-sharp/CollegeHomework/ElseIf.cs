using System;

namespace CollegeHomework
{
    class ElseIf
    {
        public ElseIf()
        {
            int nilaiAngka;

            Console.Write("Masukkan nilai angka: ");
            nilaiAngka = Convert.ToInt16(Console.ReadLine());

            void CetakHasil(int nilaiAngka, char huruf)
            {
                Console.WriteLine(String.Format(
                    "Nilai angka {0} = Nilai huruf {1}", nilaiAngka, huruf));
            }

            if (nilaiAngka >= 80)
                CetakHasil(nilaiAngka, 'A');
            else if (nilaiAngka >= 66)
                CetakHasil(nilaiAngka, 'B');
            else if (nilaiAngka >= 56)
                CetakHasil(nilaiAngka, 'C');
            else if (nilaiAngka >= 40)
                CetakHasil(nilaiAngka, 'D');
            else
                CetakHasil(nilaiAngka, 'K');
        }
    }
}