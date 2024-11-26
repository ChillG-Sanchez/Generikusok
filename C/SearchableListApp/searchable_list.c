#include <stdio.h>
#include <stdlib.h>
#include "searchable_list.h"

SearchableList* create_searchable_list(int capacity) {
    SearchableList* list = (SearchableList*)malloc(sizeof(SearchableList));
    list->items = (void**)malloc(sizeof(void*) * capacity);
    list->size = 0;
    list->capacity = capacity;
    return list;
}

void add_item(SearchableList* list, void* item) {
    if (list->size == list->capacity) {
        list->capacity *= 2;
        list->items = (void**)realloc(list->items, sizeof(void*) * list->capacity);
    }
    list->items[list->size++] = item;
}

void* find(SearchableList* list, Predicate predicate) {
    for (int i = 0; i < list->size; i++) {
        if (predicate(list->items[i])) {
            return list->items[i];
        }
    }
    return NULL;
}

SearchableList* find_all(SearchableList* list, Predicate predicate) {
    SearchableList* result = create_searchable_list(list->capacity);
    for (int i = 0; i < list->size; i++) {
        if (predicate(list->items[i])) {
            add_item(result, list->items[i]);
        }
    }
    return result;
}

void free_searchable_list(SearchableList* list) {
    free(list->items);
    free(list);
}