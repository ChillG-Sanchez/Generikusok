#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Include time.h for srand
#include "jukebox.h"

void print_song(void* song) {
    printf("Playing song: %s\n", (char*)song);
}

void print_next_song(Jukebox* jukebox) {
    if (jukebox->size > 0) {
        printf("Next song: %s\n", (char*)jukebox->songs[0]);
    } else {
        printf("No more songs in the jukebox.\n");
    }
}

int main() {
    srand(time(NULL)); // Initialize random seed

    Jukebox* jukebox = create_jukebox(10);

    add_song(jukebox, "Song 1");
    add_song(jukebox, "Song 2");
    add_song(jukebox, "Song 3");

    printf("Playing next song:\n");
    void* song = play_next(jukebox);
    if (song) {
        print_song(song);
    }

    printf("Shuffling songs:\n");
    shuffle(jukebox);

    print_next_song(jukebox);

    printf("Playing next song:\n");
    song = play_next(jukebox);
    if (song) {
        print_song(song);
    }

    print_next_song(jukebox);

    printf("Playing next song:\n");
    song = play_next(jukebox);
    if (song) {
        print_song(song);
    }

    free_jukebox(jukebox);
    return 0;
}