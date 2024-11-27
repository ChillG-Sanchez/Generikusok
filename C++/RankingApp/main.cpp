#include <iostream>
#include "ranking.h"

int main() {
    Ranking<std::string> ranking;

    ranking.Add("Item 1", 3);
    ranking.Add("Item 2", 1);
    ranking.Add("Item 3", 2);

    std::vector<std::string> top_items = ranking.GetTop(2);

    std::cout << "Top 2 items:" << std::endl;
    for (const auto& item : top_items) {
        std::cout << item << std::endl;
    }

    return 0;
}