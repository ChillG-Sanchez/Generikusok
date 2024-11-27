#ifndef SEARCHABLE_LIST_H
#define SEARCHABLE_LIST_H

#include <vector>
#include <functional>

template <typename T>
class SearchableList {
public:
    void Add(T item);
    T Find(std::function<bool(T)> predicate) const;
    std::vector<T> FindAll(std::function<bool(T)> predicate) const;

private:
    std::vector<T> items;
};

#endif