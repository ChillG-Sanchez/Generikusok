#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jukebox.h"

Jukebox* create_jukebox(int capacity) {
    Jukebox* jukebox = (Jukebox*)malloc(sizeof(Jukebox));
    jukebox->songs = (void**)malloc(sizeof(void*) * capacity);
    jukebox->size = 0;
    jukebox->capacity = capacity;
    return jukebox;
}

void add_song(Jukebox* jukebox, void* song) {
    if (jukebox->size == jukebox->capacity) {
        jukebox->capacity *= 2;
        jukebox->songs = (void**)realloc(jukebox->songs, sizeof(void*) * jukebox->capacity);
    }
    jukebox->songs[jukebox->size++] = song;
}

void* play_next(Jukebox* jukebox) {
    if (jukebox->size == 0) {
        return NULL;
    }
    void* song = jukebox->songs[0];
    for (int i = 1; i < jukebox->size; i++) {
        jukebox->songs[i - 1] = jukebox->songs[i];
    }
    jukebox->size--;
    return song;
}

void shuffle(Jukebox* jukebox) {
    for (int i = jukebox->size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        void* temp = jukebox->songs[i];
        jukebox->songs[i] = jukebox->songs[j];
        jukebox->songs[j] = temp;
    }
}

void free_jukebox(Jukebox* jukebox) {
    free(jukebox->songs);
    free(jukebox);
}