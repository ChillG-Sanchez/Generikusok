#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shopping_cart.h"

ShoppingCart* create_shopping_cart(int capacity) {
    ShoppingCart* cart = (ShoppingCart*)malloc(sizeof(ShoppingCart));
    cart->items = (CartItem*)malloc(sizeof(CartItem) * capacity);
    cart->size = 0;
    cart->capacity = capacity;
    return cart;
}

void add_item(ShoppingCart* cart, void* item, int quantity) {
    if (cart->size == cart->capacity) {
        cart->capacity *= 2;
        cart->items = (CartItem*)realloc(cart->items, sizeof(CartItem) * cart->capacity);
    }
    cart->items[cart->size].item = item;
    cart->items[cart->size].quantity = quantity;
    cart->size++;
}

void remove_item(ShoppingCart* cart, void* item) {
    for (int i = 0; i < cart->size; i++) {
        if (cart->items[i].item == item) {
            for (int j = i; j < cart->size - 1; j++) {
                cart->items[j] = cart->items[j + 1];
            }
            cart->size--;
            return;
        }
    }
}

int get_total_items(ShoppingCart* cart) {
    int total = 0;
    for (int i = 0; i < cart->size; i++) {
        total += cart->items[i].quantity;
    }
    return total;
}

void print_cart(ShoppingCart* cart) {
    for (int i = 0; i < cart->size; i++) {
        printf("Item: %s, Quantity: %d\n", (char*)cart->items[i].item, cart->items[i].quantity);
    }
}

void free_shopping_cart(ShoppingCart* cart) {
    free(cart->items);
    free(cart);
}