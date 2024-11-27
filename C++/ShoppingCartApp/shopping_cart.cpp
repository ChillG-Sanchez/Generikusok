#include "shopping_cart.h"

template <typename T>
void ShoppingCart<T>::AddItem(T item, int quantity) {
    auto it = std::find_if(items.begin(), items.end(), [&item](const std::pair<T, int>& p) {
        return p.first == item;
    });
    if (it != items.end()) {
        it->second += quantity;
    } else {
        items.push_back(std::make_pair(item, quantity));
    }
}

template <typename T>
void ShoppingCart<T>::RemoveItem(T item) {
    items.erase(std::remove_if(items.begin(), items.end(), [&item](const std::pair<T, int>& p) {
        return p.first == item;
    }), items.end());
}

template <typename T>
int ShoppingCart<T>::GetTotalItems() const {
    int total = 0;
    for (const auto& item : items) {
        total += item.second;
    }
    return total;
}

template <typename T>
void ShoppingCart<T>::PrintCart() const {
    for (const auto& item : items) {
        std::cout << "Item: " << item.first << ", Quantity: " << item.second << std::endl;
    }
}

template class ShoppingCart<int>;
template class ShoppingCart<std::string>;