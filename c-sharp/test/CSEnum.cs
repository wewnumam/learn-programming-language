using System;

namespace test
{
    class CSEnum
    {
        public CSEnum()
        {
            // System.Console.WriteLine(Planet.Mercury.ToString() + " is a planet #" + (int)Planet.Mercury);
            // System.Console.WriteLine(Planet.Pluto.ToString() + " is a planet #" + (int)Planet.Pluto);
            String name = Planet.Earth.ToString();
            int radius = (int)PlanetRadius.Earth;
            double volume = Volume(PlanetRadius.Earth);
            System.Console.WriteLine("planet: " + name);
            System.Console.WriteLine("radius: " + radius + "km");
            System.Console.WriteLine("volume: " + volume + "km3");            
        }

        public static double Volume (PlanetRadius radius)
        {
            double volume = (4.0/3.0) * Math.PI * Math.Pow((int)radius, 3);
            return volume;
        }
    }

    enum Planet
    {
        Mercury = 1,
        Venus = 2,
        Earth = 3,
        Mars = 4, 
        Jupiter = 5,
        Saturn = 6,
        Uranus = 7,
        Neptune = 8,
        Pluto = 9
    }

    enum PlanetRadius
    {
        Mercury = 2439,
        Venus = 6051,
        Earth = 6371,
        Mars = 3389, 
        Jupiter = 6911,
        Saturn = 58232,
        Uranus = 25362,
        Neptune = 24622,
        Pluto = 1188
    }
}