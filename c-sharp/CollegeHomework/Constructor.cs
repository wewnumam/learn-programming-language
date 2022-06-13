namespace CollegeHomework 
{
    class Constructor
    {
        public Constructor()
        {
            Kucing chico = new Kucing();
            Console.WriteLine(
                String.Format(
                    "{0} is a {1} year old {2} cat {3}",
                    chico.getName(),
                    chico.getAge(),
                    chico.getColor(),
                    chico.voice()));

            Kucing fido = new Kucing("Fido", 3, "Brown");
            Console.WriteLine(" name : " + fido.getName());
            Console.WriteLine("  age : " + fido.getAge());
            Console.WriteLine("color : " + fido.getColor());
            Console.WriteLine("voice : " + fido.voice());

            Kucing lucy = new Kucing("Lucy" , 2 , "Gray");
            Console.WriteLine(
                String.Format(
                    "{0} is a {1} year old {2} cat {3}",
                    lucy.getName(),
                    lucy.getAge(),
                    lucy.getColor(),
                    lucy.voice()));
        }
    }
}
