import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class Ranking<T> {
    private static class Element<T> {
        T item;
        int rank;

        Element(T item, int rank) {
            this.item = item;
            this.rank = rank;
        }
    }

    private List<Element<T>> elements = new ArrayList<>();

    public void Add(T item, int rank) {
        elements.add(new Element<>(item, rank));
        elements.sort(Comparator.comparingInt(e -> e.rank));
    }

    public List<T> GetTop(int count) {
        List<T> topElements = new ArrayList<>();
        for (int i = 0; i < count && i < elements.size(); i++) {
            topElements.add(elements.get(i).item);
        }
        return topElements;
    }

    public int size() {
        return elements.size();
    }
}