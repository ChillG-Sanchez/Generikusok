using System;

namespace AquariumApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Aquarium<string> aquarium = new Aquarium<string>();
            aquarium.AddCreature("Goldfish");
            aquarium.AddCreature("Betta");
            aquarium.AddCreature("Guppy");

            Console.WriteLine("Aquarium contents:");
            foreach (var creature in aquarium.ListCreatures())
            {
                Console.WriteLine(creature);
            }

            aquarium.FeedAll();

            aquarium.RemoveCreature("Betta");

            Console.WriteLine("Aquarium contents after removing 'Betta':");
            foreach (var creature in aquarium.ListCreatures())
            {
                Console.WriteLine(creature);
            }
        }
    }
}