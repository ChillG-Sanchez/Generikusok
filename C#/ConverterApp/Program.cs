using System;

namespace ConverterApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Converter<int, string> intToStringConverter = new Converter<int, string>(x => x.ToString());
            string result = intToStringConverter.Convert(123);
            Console.WriteLine("Converted result: " + result);

            Converter<string, int> stringToIntConverter = new Converter<string, int>(x => int.Parse(x));
            int number = stringToIntConverter.Convert("456");
            Console.WriteLine("Converted result: " + number);
        }
    }
}