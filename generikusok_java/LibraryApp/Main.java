import java.util.List;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Library<String> library = new Library<>();
        library.addItem("The Great Gatsby");
        library.addItem("1984");
        library.addItem("To Kill a Mockingbird");

        System.out.println("Library contents:");
        library.printLibrary();

        library.borrowItem("1984");

        System.out.println("\nLibrary contents after borrowing '1984':");
        library.printLibrary();

        library.returnItem("1984");

        System.out.println("\nLibrary contents after returning '1984':");
        library.printLibrary();

        System.out.println("\nSearch results for items containing 'The':");
        List<String> searchResults = library.search(item -> item.contains("The"));
        for (String item : searchResults) {
            System.out.println(item);
        }
    }
}