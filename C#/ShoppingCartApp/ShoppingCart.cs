using System;
using System.Collections.Generic;

namespace ShoppingCartApp
{
    public class ShoppingCart<T> where T : notnull
    {
        private Dictionary<T, int> items = new Dictionary<T, int>();

        public void AddItem(T item, int quantity)
        {
            if (items.ContainsKey(item))
            {
                items[item] += quantity;
            }
            else
            {
                items[item] = quantity;
            }
        }

        public void RemoveItem(T item)
        {
            if (items.ContainsKey(item))
            {
                items.Remove(item);
            }
            else
            {
                throw new InvalidOperationException("Item not found in the cart.");
            }
        }

        public int GetTotalItems()
        {
            int total = 0;
            foreach (var quantity in items.Values)
            {
                total += quantity;
            }
            return total;
        }

        public void PrintCart()
        {
            foreach (var item in items)
            {
                Console.WriteLine($"{item.Key}: {item.Value}");
            }
        }
    }
}