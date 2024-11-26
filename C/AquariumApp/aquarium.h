#ifndef AQUARIUM_H
#define AQUARIUM_H

typedef struct {
    void** creatures;
    int size;
    int capacity;
} Aquarium;

Aquarium* create_aquarium(int capacity);
void add_creature(Aquarium* aquarium, void* creature);
void remove_creature(Aquarium* aquarium, void* creature);
void feed_all(Aquarium* aquarium);
void list_creatures(Aquarium* aquarium);
void free_aquarium(Aquarium* aquarium);

#endif