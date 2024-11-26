import java.util.HashMap;
import java.util.Map;

public class ShoppingCartApp<T> {
    private Map<T, Integer> items;

    public ShoppingCartApp() {
        items = new HashMap<>();
    }

    public void addItem(T item, int quantity) {
        items.put(item, items.getOrDefault(item, 0) + quantity);
    }

    public void removeItem(T item) {
        items.remove(item);
    }

    public int getTotalItems() {
        int total = 0;
        for (int quantity : items.values()) {
            total += quantity;
        }
        return total;
    }

    public void printCart() {
        for (Map.Entry<T, Integer> entry : items.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    }
}