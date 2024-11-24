using System;
using System.Collections.Generic;

namespace JukeboxApp
{
    public class Jukebox<T>
    {
        private List<T> songs = new List<T>();
        private Random random = new Random();

        public void AddSong(T song)
        {
            songs.Add(song);
        }

        public T PlayNext()
        {
            if (songs.Count == 0)
                throw new InvalidOperationException("No songs in the jukebox.");

            T nextSong = songs[0];
            songs.RemoveAt(0);
            return nextSong;
        }

        public void Shuffle()
        {
            for (int i = songs.Count - 1; i > 0; i--)
            {
                int j = random.Next(i + 1);
                T temp = songs[i];
                songs[i] = songs[j];
                songs[j] = temp;
            }
        }
    }
}