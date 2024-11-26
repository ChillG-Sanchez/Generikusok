import java.util.ArrayList;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;

public class SearchableList<T> {
    private List<T> elements = new ArrayList<>();

    public void add(T item) {
        elements.add(item);
    }

    public T find(Predicate<T> predicate) {
        for (T element : elements) {
            if (predicate.test(element)) {
                return element;
            }
        }
        return null;
    }

    public List<T> findAll(Predicate<T> predicate) {
        return elements.stream().filter(predicate).collect(Collectors.toList());
    }

    public int size() {
        return elements.size();
    }
}