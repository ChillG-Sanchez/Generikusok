#include "jukebox.h"
#include <stdexcept>

template <typename T>
void Jukebox<T>::AddSong(T song) {
    songs.push_back(song);
}

template <typename T>
T Jukebox<T>::PlayNext() {
    if (IsEmpty()) {
        throw std::out_of_range("No more songs in the jukebox");
    }
    T song = songs.front();
    songs.erase(songs.begin());
    return song;
}

template <typename T>
void Jukebox<T>::Shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(songs.begin(), songs.end(), g);
}

template <typename T>
bool Jukebox<T>::IsEmpty() const {
    return songs.empty();
}

template class Jukebox<std::string>;