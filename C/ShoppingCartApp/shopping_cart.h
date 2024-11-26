#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

typedef struct {
    void* item;
    int quantity;
} CartItem;

typedef struct {
    CartItem* items;
    int size;
    int capacity;
} ShoppingCart;

ShoppingCart* create_shopping_cart(int capacity);
void add_item(ShoppingCart* cart, void* item, int quantity);
void remove_item(ShoppingCart* cart, void* item);
int get_total_items(ShoppingCart* cart);
void print_cart(ShoppingCart* cart);
void free_shopping_cart(ShoppingCart* cart);

#endif