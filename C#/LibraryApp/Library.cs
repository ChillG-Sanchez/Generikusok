using System;
using System.Collections.Generic;

namespace LibraryApp
{
    public class Library<T>
    {
        private List<T> items = new List<T>();

        public void AddItem(T item)
        {
            items.Add(item);
        }

        public void BorrowItem(T item)
        {
            if (items.Contains(item))
            {
                items.Remove(item);
            }
            else
            {
                throw new InvalidOperationException("Item not found in the library.");
            }
        }

        public void ReturnItem(T item)
        {
            items.Add(item);
        }

        public List<T> Search(Func<T, bool> predicate)
        {
            List<T> result = new List<T>();
            foreach (var item in items)
            {
                if (predicate(item))
                {
                    result.Add(item);
                }
            }
            return result;
        }
    }
}