using System;

namespace RankingApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Ranking<string> ranking = new Ranking<string>();
            ranking.Add("Alice", 2);
            ranking.Add("Bob", 1);
            ranking.Add("Charlie", 3);

            var top2 = ranking.GetTop(2);
            Console.WriteLine("Top 2:");
            foreach (var item in top2)
            {
                Console.WriteLine(item);
            }
        }
    }
}