namespace CollegeHomework 
{
    class Kucing
    {
        private string name;
        private int age;
        private string color;

        public Kucing()
        {
            this.name = "";
            this.age = 0;
            this.color = "";
        }

        public Kucing(
            string name, int age, string color)
        {
            this.name = name;
            this.age = age;
            this.color = color;
        }

        public void setName(string name) => this.name = name;
        public void setAge(int age) => this.age = age;
        public void setColor(string color) => this.color = color;
        public string getName() => this.name;
        public int getAge() => this.age;
        public string getColor() => this.color;
        public string voice() => "Meong!";
    }
}
