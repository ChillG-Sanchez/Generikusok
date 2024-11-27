#include "library.h"

template <typename T>
void Library<T>::AddItem(T item) {
    items.push_back(item);
}

template <typename T>
void Library<T>::BorrowItem(T item) {
    items.erase(std::remove(items.begin(), items.end(), item), items.end());
}

template <typename T>
void Library<T>::ReturnItem(T item) {
    items.push_back(item);
}

template <typename T>
std::vector<T> Library<T>::Search(std::function<bool(T)> predicate) const {
    std::vector<T> results;
    for (const auto& item : items) {
        if (predicate(item)) {
            results.push_back(item);
        }
    }
    return results;
}

template class Library<int>;
template class Library<std::string>;