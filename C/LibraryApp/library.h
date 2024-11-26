#ifndef LIBRARY_H
#define LIBRARY_H

typedef int (*Predicate)(void*);

typedef struct {
    void** items;
    int size;
    int capacity;
} Library;

Library* create_library(int capacity);
void add_item(Library* library, void* item);
void borrow_item(Library* library, void* item);
void return_item(Library* library, void* item);
Library* search(Library* library, Predicate predicate);
void free_library(Library* library);

#endif