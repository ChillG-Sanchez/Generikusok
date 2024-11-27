#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
class ShoppingCart {
public:
    void AddItem(T item, int quantity);
    void RemoveItem(T item);
    int GetTotalItems() const;
    void PrintCart() const;

private:
    std::vector<std::pair<T, int>> items;
};

#endif