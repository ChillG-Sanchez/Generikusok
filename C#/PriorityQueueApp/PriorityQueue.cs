using System;
using System.Collections.Generic;

namespace PriorityQueueApp
{
    public class PriorityQueue<T>
    {
        private List<(T item, int priority)> elements = new List<(T item, int priority)>();

        public void Enqueue(T item, int priority)
        {
            elements.Add((item, priority));
            elements.Sort((x, y) => x.priority.CompareTo(y.priority));
        }

        public T Dequeue()
        {
            if (elements.Count == 0)
                throw new InvalidOperationException("The queue is empty.");

            var highestPriorityElement = elements[0];
            elements.RemoveAt(0);
            return highestPriorityElement.item;
        }

        public T Peek()
        {
            if (elements.Count == 0)
                throw new InvalidOperationException("The queue is empty.");

            return elements[0].item;
        }
    }
}