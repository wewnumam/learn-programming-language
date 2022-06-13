namespace CollegeHomework 
{
    class Enkapsulasi
    {
        class Player
        {
            public string? firstName;
            public string? lastName;
            public string? email;

            public string GetFullName() => firstName + " " + lastName;
        }
        public Enkapsulasi()
        {
            Player player1 = new Player ();
            player1.firstName = "Tri";
            Console.WriteLine ("First name is " + player1.firstName);
            player1.lastName = "Anggraeni";
            Console.WriteLine("The full name is " + player1.GetFullName());
        }
    }
}
