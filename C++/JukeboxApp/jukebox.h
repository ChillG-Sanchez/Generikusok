#ifndef JUKEBOX_H
#define JUKEBOX_H

#include <vector>
#include <algorithm>
#include <random>

template <typename T>
class Jukebox {
public:
    void AddSong(T song);
    T PlayNext();
    void Shuffle();
    bool IsEmpty() const;

private:
    std::vector<T> songs;
};

#endif