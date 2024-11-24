using System;
using System.Collections.Generic;

namespace SearchableListApp
{
    public class SearchableList<T>
    {
        private List<T> elements = new List<T>();

        public void Add(T item)
        {
            elements.Add(item);
        }

        public T Find(Func<T, bool> predicate)
        {
            foreach (var element in elements)
            {
                if (predicate(element))
                {
                    return element;
                }
            }
            return default(T)!;
        }

        public List<T> FindAll(Func<T, bool> predicate)
        {
            List<T> result = new List<T>();
            foreach (var element in elements)
            {
                if (predicate(element))
                {
                    result.Add(element);
                }
            }
            return result;
        }
    }
}