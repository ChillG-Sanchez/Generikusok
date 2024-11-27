#include <iostream>
#include "jukebox.h"

int main() {
    Jukebox<std::string> jukebox;

    jukebox.AddSong("Song 1");
    jukebox.AddSong("Song 2");
    jukebox.AddSong("Song 3");

    std::cout << "Playing songs in order:" << std::endl;
    while (!jukebox.IsEmpty()) {
        std::cout << "Playing song: " << jukebox.PlayNext() << std::endl;
    }

    jukebox.AddSong("Song 1");
    jukebox.AddSong("Song 2");
    jukebox.AddSong("Song 3");

    std::cout << "Shuffling..." << std::endl;
    jukebox.Shuffle();

    while (!jukebox.IsEmpty()) {
        std::cout << "Playing song: " << jukebox.PlayNext() << std::endl;
    }

    return 0;
}