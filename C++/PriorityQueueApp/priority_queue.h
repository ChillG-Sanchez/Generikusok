#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <queue>
#include <vector>
#include <functional>

template <typename T>
class PriorityQueue {
public:
    void Enqueue(T item, int priority);
    T Dequeue();
    T Peek() const;
    bool IsEmpty() const;

private:
    std::priority_queue<std::pair<int, T>, std::vector<std::pair<int, T> >, std::greater<std::pair<int, T> > > queue;
};

#endif