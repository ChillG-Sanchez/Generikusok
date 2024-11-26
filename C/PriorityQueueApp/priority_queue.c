#include <stdio.h>
#include <stdlib.h>
#include "priority_queue.h"

PriorityQueue* create_priority_queue(int capacity) {
    PriorityQueue* pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    pq->nodes = (PQNode*)malloc(sizeof(PQNode) * capacity);
    pq->size = 0;
    pq->capacity = capacity;
    return pq;
}

void enqueue(PriorityQueue* pq, void* item, int priority) {
    if (pq->size == pq->capacity) {
        pq->capacity *= 2;
        pq->nodes = (PQNode*)realloc(pq->nodes, sizeof(PQNode) * pq->capacity);
    }
    PQNode node;
    node.item = item;
    node.priority = priority;
    pq->nodes[pq->size++] = node;

    for (int i = pq->size - 1; i > 0 && pq->nodes[i].priority < pq->nodes[i - 1].priority; i--) {
        PQNode temp = pq->nodes[i];
        pq->nodes[i] = pq->nodes[i - 1];
        pq->nodes[i - 1] = temp;
    }
}

void* dequeue(PriorityQueue* pq) {
    if (pq->size == 0) {
        return NULL;
    }
    void* item = pq->nodes[0].item;
    for (int i = 1; i < pq->size; i++) {
        pq->nodes[i - 1] = pq->nodes[i];
    }
    pq->size--;
    return item;
}

void* peek(PriorityQueue* pq) {
    if (pq->size == 0) {
        return NULL;
    }
    return pq->nodes[0].item;
}

void free_priority_queue(PriorityQueue* pq) {
    free(pq->nodes);
    free(pq);
}