using System;

namespace JukeboxApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Jukebox<string> jukebox = new Jukebox<string>();
            jukebox.AddSong("Song 1");
            jukebox.AddSong("Song 2");
            jukebox.AddSong("Song 3");

            Console.WriteLine("Playing next song: " + jukebox.PlayNext());

            jukebox.Shuffle();
            Console.WriteLine("Playing next song after shuffle: " + jukebox.PlayNext());
            Console.WriteLine("Playing next song after shuffle: " + jukebox.PlayNext());
        }
    }
}