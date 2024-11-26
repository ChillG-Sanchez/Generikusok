#ifndef JUKEBOX_H
#define JUKEBOX_H

typedef struct {
    void** songs;
    int size;
    int capacity;
} Jukebox;

Jukebox* create_jukebox(int capacity);
void add_song(Jukebox* jukebox, void* song);
void* play_next(Jukebox* jukebox);
void shuffle(Jukebox* jukebox);
void free_jukebox(Jukebox* jukebox);

#endif