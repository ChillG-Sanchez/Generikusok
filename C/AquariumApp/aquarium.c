#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aquarium.h"

Aquarium* create_aquarium(int capacity) {
    Aquarium* aquarium = (Aquarium*)malloc(sizeof(Aquarium));
    aquarium->creatures = (void**)malloc(sizeof(void*) * capacity);
    aquarium->size = 0;
    aquarium->capacity = capacity;
    return aquarium;
}

void add_creature(Aquarium* aquarium, void* creature) {
    if (aquarium->size == aquarium->capacity) {
        aquarium->capacity *= 2;
        aquarium->creatures = (void**)realloc(aquarium->creatures, sizeof(void*) * aquarium->capacity);
    }
    aquarium->creatures[aquarium->size++] = creature;
}

void remove_creature(Aquarium* aquarium, void* creature) {
    for (int i = 0; i < aquarium->size; i++) {
        if (aquarium->creatures[i] == creature) {
            for (int j = i; j < aquarium->size - 1; j++) {
                aquarium->creatures[j] = aquarium->creatures[j + 1];
            }
            aquarium->size--;
            return;
        }
    }
}

void feed_all(Aquarium* aquarium) {
    for (int i = 0; i < aquarium->size; i++) {
        printf("Feeding: %s\n", (char*)aquarium->creatures[i]);
    }
}

void list_creatures(Aquarium* aquarium) {
    for (int i = 0; i < aquarium->size; i++) {
        printf("Creature: %s\n", (char*)aquarium->creatures[i]);
    }
}

void free_aquarium(Aquarium* aquarium) {
    free(aquarium->creatures);
    free(aquarium);
}