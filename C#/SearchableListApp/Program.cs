using System;

namespace SearchableListApp
{
    class Program
    {
        static void Main(string[] args)
        {
            SearchableList<int> sl = new SearchableList<int>();
            sl.Add(1);
            sl.Add(2);
            sl.Add(3);
            sl.Add(4);
            sl.Add(5);

            int foundItem = sl.Find(x => x == 3);
            Console.WriteLine("Found item: " + foundItem);

            var foundItems = sl.FindAll(x => x > 2);
            Console.WriteLine("Found items: " + string.Join(", ", foundItems));
        }
    }
}