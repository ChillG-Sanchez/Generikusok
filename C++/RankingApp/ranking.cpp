#include "ranking.h"

template <typename T>
void Ranking<T>::Add(T item, int rank) {
    items.push_back(std::make_pair(rank, item));
    std::sort(items.begin(), items.end(), [](const std::pair<int, T>& a, const std::pair<int, T>& b) {
        return a.first < b.first;
    });
}

template <typename T>
std::vector<T> Ranking<T>::GetTop(int count) const {
    std::vector<T> top_items;
    for (int i = 0; i < count && i < items.size(); ++i) {
        top_items.push_back(items[i].second);
    }
    return top_items;
}

template class Ranking<int>;
template class Ranking<std::string>;