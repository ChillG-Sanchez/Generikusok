using System;

namespace TimestampedValueApp
{
    class Program
    {
        static void Main(string[] args)
        {
            TimestampedValue<string> tsValue = new TimestampedValue<string>("Initial value");
            Console.WriteLine("Initial value: " + tsValue.Value);
            Console.WriteLine("Initial timestamp: " + tsValue.Timestamp);

            System.Threading.Thread.Sleep(2000);

            tsValue.UpdateValue("Updated value");
            Console.WriteLine("Updated value: " + tsValue.Value);
            Console.WriteLine("Updated timestamp: " + tsValue.Timestamp);
            Console.WriteLine("Age in seconds: " + tsValue.GetAge());
        }
    }
}