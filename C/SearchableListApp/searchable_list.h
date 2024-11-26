#ifndef SEARCHABLE_LIST_H
#define SEARCHABLE_LIST_H

typedef int (*Predicate)(void*);

typedef struct {
    void** items;
    int size;
    int capacity;
} SearchableList;

SearchableList* create_searchable_list(int capacity);
void add_item(SearchableList* list, void* item);
void* find(SearchableList* list, Predicate predicate);
SearchableList* find_all(SearchableList* list, Predicate predicate);
void free_searchable_list(SearchableList* list);

#endif