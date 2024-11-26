import java.util.ArrayList;
import java.util.List;

public class Aquarium<T> {
    private List<T> creatures;

    public Aquarium() {
        creatures = new ArrayList<>();
    }

    public void addCreature(T creature) {
        creatures.add(creature);
    }

    public void removeCreature(T creature) {
        creatures.remove(creature);
    }

    public void feedAll() {
        for (T creature : creatures) {
            System.out.println("Feeding: " + creature);
        }
    }

    public List<T> listCreatures() {
        return new ArrayList<>(creatures);
    }
}