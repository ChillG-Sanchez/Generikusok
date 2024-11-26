public class MainApp {
    public static void main(String[] args) {
        ShoppingCartApp<String> cart = new ShoppingCartApp<>();
        cart.addItem("Apple", 5);
        cart.addItem("Banana", 3);
        cart.addItem("Orange", 7);

        System.out.println("Cart contents:");
        cart.printCart();

        System.out.println("Total items: " + cart.getTotalItems());

        cart.removeItem("Banana");

        System.out.println("Cart contents after removing banana:");
        cart.printCart();

        System.out.println("Total items: " + cart.getTotalItems());
    }
}