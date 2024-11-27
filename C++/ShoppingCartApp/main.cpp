#include <iostream>
#include "shopping_cart.h"

int main() {
    ShoppingCart<std::string> cart;

    cart.AddItem("Apple", 5);
    cart.AddItem("Banana", 3);
    cart.AddItem("Orange", 7);

    std::cout << "Cart contents:" << std::endl;
    cart.PrintCart();

    std::cout << "Total items: " << cart.GetTotalItems() << std::endl;

    cart.RemoveItem("Banana");

    std::cout << "Cart contents after removing Banana:" << std::endl;
    cart.PrintCart();

    std::cout << "Total items: " << cart.GetTotalItems() << std::endl;

    return 0;
}