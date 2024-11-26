#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

typedef struct {
    void* item;
    int priority;
} PQNode;

typedef struct {
    PQNode* nodes;
    int size;
    int capacity;
} PriorityQueue;

PriorityQueue* create_priority_queue(int capacity);
void enqueue(PriorityQueue* pq, void* item, int priority);
void* dequeue(PriorityQueue* pq);
void* peek(PriorityQueue* pq);
void free_priority_queue(PriorityQueue* pq);

#endif