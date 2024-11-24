using System;
using System.Collections.Generic;

namespace AquariumApp
{
    public class Aquarium<T>
    {
        private List<T> creatures = new List<T>();

        public void AddCreature(T creature)
        {
            creatures.Add(creature);
        }

        public void RemoveCreature(T creature)
        {
            if (creatures.Contains(creature))
            {
                creatures.Remove(creature);
            }
            else
            {
                throw new InvalidOperationException("Creature not found in the aquarium.");
            }
        }

        public void FeedAll()
        {
            foreach (var creature in creatures)
            {
                Console.WriteLine($"Feeding {creature}");
            }
        }

        public List<T> ListCreatures()
        {
            return new List<T>(creatures);
        }
    }
}