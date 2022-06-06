namespace CollegeHomework 
{
    class Enkapsulasi
    {
        public Enkapsulasi()
        {
            Console.Title = "Class & Objek";
            Kucing fido = new Kucing();
            fido.setName("Fido");
            fido.setAge(3);
            fido.setColor("Brown");
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
