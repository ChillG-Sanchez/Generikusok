#include <iostream>
#include "searchable_list.h"

int main() {
    SearchableList<int> list;

    list.Add(1);
    list.Add(2);
    list.Add(3);
    list.Add(4);
    list.Add(5);

    try {
        int found = list.Find([](int item) { return item == 3; });
        std::cout << "Found: " << found << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    std::vector<int> all = list.FindAll([](int item) { return item % 2 == 0; });
    std::cout << "All even numbers: ";
    for (int item : all) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}