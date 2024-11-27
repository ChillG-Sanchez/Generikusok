#include "aquarium.h"

template <typename T>
void Aquarium<T>::AddCreature(T creature) {
    creatures.push_back(creature);
}

template <typename T>
void Aquarium<T>::RemoveCreature(T creature) {
    creatures.erase(std::remove(creatures.begin(), creatures.end(), creature), creatures.end());
}

template <typename T>
void Aquarium<T>::FeedAll() const {
    for (const auto& creature : creatures) {
        std::cout << "Feeding: " << creature << std::endl;
    }
}

template <typename T>
std::vector<T> Aquarium<T>::ListCreatures() const {
    return creatures;
}

template class Aquarium<int>;
template class Aquarium<std::string>;