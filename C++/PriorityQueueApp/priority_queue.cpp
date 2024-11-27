#include "priority_queue.h"
#include <stdexcept>

template <typename T>
void PriorityQueue<T>::Enqueue(T item, int priority) {
    queue.push(std::make_pair(priority, item));
}

template <typename T>
T PriorityQueue<T>::Dequeue() {
    if (IsEmpty()) {
        throw std::out_of_range("PriorityQueue is empty");
    }
    T item = queue.top().second;
    queue.pop();
    return item;
}

template <typename T>
T PriorityQueue<T>::Peek() const {
    if (IsEmpty()) {
        throw std::out_of_range("PriorityQueue is empty");
    }
    return queue.top().second;
}

template <typename T>
bool PriorityQueue<T>::IsEmpty() const {
    return queue.empty();
}

template class PriorityQueue<std::string>;