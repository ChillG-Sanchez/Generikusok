import java.util.List;

public class Main {
    public static void main(String[] args) {
        SearchableList<String> searchableList = new SearchableList<>();

        searchableList.add("apple");
        searchableList.add("banana");
        searchableList.add("cherry");
        searchableList.add("date");

        String foundItem = searchableList.find(item -> item.startsWith("b"));
        System.out.println("Found item: " + foundItem);

        List<String> foundItems = searchableList.findAll(item -> item.contains("e"));
        System.out.println("Found items: " + String.join(", ", foundItems));
    }
}