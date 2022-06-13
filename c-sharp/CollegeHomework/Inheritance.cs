namespace CollegeHomework 
{
    public class Polygon {
        protected int width, height;
        public void setValues(int width , int height) {
            this.width = width;
            this.height = height;
        }
    }

    public class Rectangle : Polygon {
        public int area() => width * height;
    }

    public class Triangle : Polygon {
        public int area() => (width * height) / 2;
    }
    
    class Inheritance
    {
        
        public Inheritance()
        {
            Rectangle rect = new Rectangle();
            Triangle cone = new Triangle();
            rect.setValues(4, 5);
            cone.setValues(4, 5);
            Console.WriteLine("Rectangle area: " + rect.area());
            Console.WriteLine("Triangle area: " + cone.area());
        }
    }
}
