#include <stdio.h>
#include <stdlib.h>
#include "library.h"

Library* create_library(int capacity) {
    Library* library = (Library*)malloc(sizeof(Library));
    library->items = (void**)malloc(sizeof(void*) * capacity);
    library->size = 0;
    library->capacity = capacity;
    return library;
}

void add_item(Library* library, void* item) {
    if (library->size == library->capacity) {
        library->capacity *= 2;
        library->items = (void**)realloc(library->items, sizeof(void*) * library->capacity);
    }
    library->items[library->size++] = item;
}

void borrow_item(Library* library, void* item) {
    for (int i = 0; i < library->size; i++) {
        if (library->items[i] == item) {
            for (int j = i; j < library->size - 1; j++) {
                library->items[j] = library->items[j + 1];
            }
            library->size--;
            return;
        }
    }
}

void return_item(Library* library, void* item) {
    add_item(library, item);
}

Library* search(Library* library, Predicate predicate) {
    Library* result = create_library(library->capacity);
    for (int i = 0; i < library->size; i++) {
        if (predicate(library->items[i])) {
            add_item(result, library->items[i]);
        }
    }
    return result;
}

void free_library(Library* library) {
    free(library->items);
    free(library);
}