#include <stdio.h>
#include "searchable_list.h"

int is_even(void* item) {
    return (*(int*)item) % 2 == 0;
}

int is_greater_than_five(void* item) {
    return (*(int*)item) > 5;
}

int main() {
    SearchableList* list = create_searchable_list(10);

    int item1 = 1;
    int item2 = 2;
    int item3 = 6;
    int item4 = 8;

    add_item(list, &item1);
    add_item(list, &item2);
    add_item(list, &item3);
    add_item(list, &item4);

    int* found_item = (int*)find(list, is_even);
    if (found_item) {
        printf("First even item: %d\n", *found_item);
    } else {
        printf("No even item found.\n");
    }

    SearchableList* found_items = find_all(list, is_greater_than_five);
    printf("Items greater than five:\n");
    for (int i = 0; i < found_items->size; i++) {
        printf("%d\n", *(int*)found_items->items[i]);
    }

    free_searchable_list(found_items);
    free_searchable_list(list);
    return 0;
}