#include <stdio.h>
#include <stdlib.h>
#include "shopping_cart.h"

int main() {
    ShoppingCart* cart = create_shopping_cart(10);

    add_item(cart, "Apple", 5);
    add_item(cart, "Banana", 3);
    add_item(cart, "Orange", 7);

    printf("Cart contents:\n");
    print_cart(cart);

    printf("Total items: %d\n", get_total_items(cart));

    remove_item(cart, "Banana");

    printf("Cart contents after removing Banana:\n");
    print_cart(cart);

    printf("Total items: %d\n", get_total_items(cart));

    free_shopping_cart(cart);
    return 0;
}