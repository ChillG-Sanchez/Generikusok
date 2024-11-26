public class Main {
    public static void main(String[] args) {
        Jukebox<String> jukebox = new Jukebox<>();

        jukebox.AddSong("Song 1");
        jukebox.AddSong("Song 2");
        jukebox.AddSong("Song 3");

        System.out.println("Shuffling songs...");
        jukebox.Shuffle();

        System.out.println("Playing next song: " + jukebox.PlayNext());
        System.out.println("Playing next song: " + jukebox.PlayNext());
        System.out.println("Playing next song: " + jukebox.PlayNext());
    }
}