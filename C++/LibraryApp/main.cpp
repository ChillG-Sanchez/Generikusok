#include <iostream>
#include "library.h"

int main() {
    Library<std::string> library;

    library.AddItem("Book 1");
    library.AddItem("Book 2");
    library.AddItem("Magazine 1");

    std::cout << "Library contents:" << std::endl;
    for (const auto& item : library.Search([](const std::string&) { return true; })) {
        std::cout << item << std::endl;
    }

    library.BorrowItem("Book 1");

    std::cout << "Library contents after borrowing 'Book 1':" << std::endl;
    for (const auto& item : library.Search([](const std::string&) { return true; })) {
        std::cout << item << std::endl;
    }

    library.ReturnItem("Book 1");

    std::cout << "Library contents after returning 'Book 1':" << std::endl;
    for (const auto& item : library.Search([](const std::string&) { return true; })) {
        std::cout << item << std::endl;
    }

    std::vector<std::string> searchResults = library.Search([](const std::string& item) {
        return item.find("Book") != std::string::npos;
    });

    std::cout << "Search results for items containing 'Book':" << std::endl;
    for (const auto& item : searchResults) {
        std::cout << item << std::endl;
    }

    return 0;
}