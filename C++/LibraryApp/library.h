#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <algorithm>
#include <functional>

template <typename T>
class Library {
public:
    void AddItem(T item);
    void BorrowItem(T item);
    void ReturnItem(T item);
    std::vector<T> Search(std::function<bool(T)> predicate) const;

private:
    std::vector<T> items;
};

#endif