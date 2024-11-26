#include <stdio.h>
#include <stdlib.h>
#include "aquarium.h"

int main() {
    Aquarium* aquarium = create_aquarium(10);

    add_creature(aquarium, "Goldfish");
    add_creature(aquarium, "Betta");
    add_creature(aquarium, "Guppy");

    printf("Aquarium contents:\n");
    list_creatures(aquarium);

    printf("\nFeeding all creatures:\n");
    feed_all(aquarium);

    remove_creature(aquarium, "Betta");

    printf("\nAquarium contents after removing Betta:\n");
    list_creatures(aquarium);

    free_aquarium(aquarium);
    return 0;
}