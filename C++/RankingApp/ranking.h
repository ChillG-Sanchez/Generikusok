#ifndef RANKING_H
#define RANKING_H

#include <vector>
#include <algorithm>

template <typename T>
class Ranking {
public:
    void Add(T item, int rank);
    std::vector<T> GetTop(int count) const;

private:
    std::vector<std::pair<int, T>> items;
};

#endif