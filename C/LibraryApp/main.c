#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

int is_book(void* item) {
    return strstr((char*)item, "Book") != NULL;
}

int main() {
    Library* library = create_library(10);

    add_item(library, "Book 1");
    add_item(library, "Book 2");
    add_item(library, "Magazine 1");

    printf("Library contents:\n");
    for (int i = 0; i < library->size; i++) {
        printf("%s\n", (char*)library->items[i]);
    }

    borrow_item(library, "Book 1");

    printf("\nLibrary contents after borrowing 'Book 1':\n");
    for (int i = 0; i < library->size; i++) {
        printf("%s\n", (char*)library->items[i]);
    }

    return_item(library, "Book 1");

    printf("\nLibrary contents after returning 'Book 1':\n");
    for (int i = 0; i < library->size; i++) {
        printf("%s\n", (char*)library->items[i]);
    }

    Library* search_results = search(library, is_book);

    printf("\nSearch results for items containing 'Book':\n");
    for (int i = 0; i < search_results->size; i++) {
        printf("%s\n", (char*)search_results->items[i]);
    }

    free_library(search_results);
    free_library(library);
    return 0;
}