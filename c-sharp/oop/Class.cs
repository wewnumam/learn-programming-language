using System;

namespace oop
{
    class Class
    {
        public Class()
        {
            Messages messages = new Messages();
            Console.WriteLine(messages.GetType());
            messages.Hello();
        }
    } 
}

namespace oop
{
    class Messages
    {
        public void Hello() 
        {
            Console.WriteLine("Hello World!");
        }
    }
}