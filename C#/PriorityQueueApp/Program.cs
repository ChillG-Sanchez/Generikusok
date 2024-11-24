using System;

namespace PriorityQueueApp
{
    class Program
    {
        static void Main(string[] args)
        {
            PriorityQueue<string> pq = new PriorityQueue<string>();
            pq.Enqueue("Low priority", 5);
            pq.Enqueue("High priority", 1);
            pq.Enqueue("Medium priority", 3);

            Console.WriteLine("Peek: " + pq.Peek());
            Console.WriteLine("Dequeue: " + pq.Dequeue());
            Console.WriteLine("Dequeue: " + pq.Dequeue());
            Console.WriteLine("Dequeue: " + pq.Dequeue());
        }
    }
}