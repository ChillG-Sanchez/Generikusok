#include <stdio.h>
#include "priority_queue.h"

int main() {
    PriorityQueue* pq = create_priority_queue(10);

    int item1 = 1;
    int item2 = 2;
    int item3 = 3;

    enqueue(pq, &item1, 3);
    enqueue(pq, &item2, 1);
    enqueue(pq, &item3, 2);

    printf("Peek: %d\n", *(int*)peek(pq));

    printf("Dequeue: %d\n", *(int*)dequeue(pq));
    printf("Dequeue: %d\n", *(int*)dequeue(pq));
    printf("Dequeue: %d\n", *(int*)dequeue(pq));

    free_priority_queue(pq);
    return 0;
}