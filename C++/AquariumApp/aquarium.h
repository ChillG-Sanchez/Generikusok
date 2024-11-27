#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
class Aquarium {
public:
    void AddCreature(T creature);
    void RemoveCreature(T creature);
    void FeedAll() const;
    std::vector<T> ListCreatures() const;

private:
    std::vector<T> creatures;
};

#endif