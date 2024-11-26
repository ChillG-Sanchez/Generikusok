import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;

public class Jukebox<T> {
    private List<T> songs = new ArrayList<>();
    private Random random = new Random();

    public void AddSong(T song) {
        songs.add(song);
    }

    public T PlayNext() {
        if (songs.isEmpty()) {
            throw new IllegalStateException("No songs in the jukebox.");
        }
        return songs.remove(0);
    }

    public void Shuffle() {
        Collections.shuffle(songs, random);
    }

    public int size() {
        return songs.size();
    }
}