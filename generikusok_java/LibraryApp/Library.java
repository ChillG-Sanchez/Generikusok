import java.util.ArrayList;
import java.util.List;
import java.util.function.Predicate;

public class Library<T> {
    private List<T> items;

    public Library() {
        items = new ArrayList<>();
    }

    public void addItem(T item) {
        items.add(item);
    }

    public void borrowItem(T item) {
        items.remove(item);
    }

    public void returnItem(T item) {
        items.add(item);
    }

    public List<T> search(Predicate<T> predicate) {
        List<T> result = new ArrayList<>();
        for (T item : items) {
            if (predicate.test(item)) {
                result.add(item);
            }
        }
        return result;
    }

    public void printLibrary() {
        for (T item : items) {
            System.out.println(item);
        }
    }
}