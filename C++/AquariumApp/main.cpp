#include <iostream>
#include "aquarium.h"

int main() {
    Aquarium<std::string> aquarium;

    aquarium.AddCreature("Goldfish");
    aquarium.AddCreature("Betta");
    aquarium.AddCreature("Guppy");

    std::cout << "Aquarium contents:" << std::endl;
    for (const auto& creature : aquarium.ListCreatures()) {
        std::cout << "Creature: " << creature << std::endl;
    }

    std::cout << "Feeding all creatures:" << std::endl;
    aquarium.FeedAll();

    aquarium.RemoveCreature("Betta");

    std::cout << "Aquarium contents after removing Betta:" << std::endl;
    for (const auto& creature : aquarium.ListCreatures()) {
        std::cout << "Creature: " << creature << std::endl;
    }

    return 0;
}