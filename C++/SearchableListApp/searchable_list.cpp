#include "searchable_list.h"

template <typename T>
void SearchableList<T>::Add(T item) {
    items.push_back(item);
}

template <typename T>
T SearchableList<T>::Find(std::function<bool(T)> predicate) const {
    for (const auto& item : items) {
        if (predicate(item)) {
            return item;
        }
    }
    throw std::runtime_error("Item not found");
}

template <typename T>
std::vector<T> SearchableList<T>::FindAll(std::function<bool(T)> predicate) const {
    std::vector<T> results;
    for (const auto& item : items) {
        if (predicate(item)) {
            results.push_back(item);
        }
    }
    return results;
}

template class SearchableList<int>;
template class SearchableList<std::string>;