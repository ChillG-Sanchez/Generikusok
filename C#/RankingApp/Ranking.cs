using System;
using System.Collections.Generic;
using System.Linq;

namespace RankingApp
{
    public class Ranking<T>
    {
        private List<(T item, int rank)> elements = new List<(T item, int rank)>();

        public void Add(T item, int rank)
        {
            elements.Add((item, rank));
            elements = elements.OrderBy(e => e.rank).ToList();
        }

        public List<T> GetTop(int count)
        {
            return elements.Take(count).Select(e => e.item).ToList();
        }
    }
}