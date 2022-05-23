namespace CollegeHomework
{
    class Function
    {
        static int KonversiTahunKeUmur(int tahunLahir) {
            DateTime tanggalSekarang = DateTime.Today;
            int tahunSekarang = Convert.ToInt32(tanggalSekarang.ToString("yyyy"));
            return tahunSekarang - tahunLahir;
        }

        static bool BolehMembuatSIM(int umur) {
            return umur >= 17;
        }

        static void CetakStatus(string status) {
            System.Console.WriteLine(
                String.Format("Anda {0} untuk membuat SIM", status));
        }
        
        public Function()
        {
            int tahunLahirSaya = 2003;
            int umurSaya = KonversiTahunKeUmur(tahunLahirSaya);

            if (BolehMembuatSIM(umurSaya))
                CetakStatus("DIIZINKAN");
            else
                CetakStatus("TIDAK DIIZINKAN");
        }
    }
}