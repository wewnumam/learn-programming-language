using System;
using System.Threading;

namespace test
{
    class CSThread
    {
        public CSThread()
        {
            Thread mainThread = Thread.CurrentThread;
            mainThread.Name = "Main Thread";
            // System.Console.WriteLine(mainThread.Name);

            // Thread thread1 = new Thread(CountDown);
            // Thread thread2 = new Thread(CountUp);
            Thread thread1 = new Thread(() => CountDown("Timer #1"));
            Thread thread2 = new Thread(() => CountUp("Timer #2"));
            thread1.Start();
            thread2.Start();
            System.Console.WriteLine(mainThread.Name + " is complete!");
        }

        public void CountDown(String name)
        {
            for (int i = 10; i >= 0; i--)
            {
                System.Console.WriteLine("Timer #1 : " + i + " seconds");
                Thread.Sleep(1000);
            }
            System.Console.WriteLine("Timer #1 is complete!");
        }

        public void CountUp(String name)
        {
            for (int i = 0; i <= 10; i++)
            {
                System.Console.WriteLine("Timer #2 : " + i + " seconds");
                Thread.Sleep(1000);
            }
            System.Console.WriteLine("Timer #2 is complete!");
        }
    }
}