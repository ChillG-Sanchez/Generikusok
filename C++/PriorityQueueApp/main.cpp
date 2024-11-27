#include <iostream>
#include "priority_queue.h"

int main() {
    PriorityQueue<std::string> pq;

    pq.Enqueue("Task 1", 3);
    pq.Enqueue("Task 2", 1);
    pq.Enqueue("Task 3", 2);

    std::cout << "Peek: " << pq.Peek() << std::endl;

    std::cout << "Dequeue: " << pq.Dequeue() << std::endl;
    std::cout << "Dequeue: " << pq.Dequeue() << std::endl;
    std::cout << "Dequeue: " << pq.Dequeue() << std::endl;

    return 0;
}