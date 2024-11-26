public class Main {
    public static void main(String[] args) {
        Aquarium<String> aquarium = new Aquarium<>();
        aquarium.addCreature("Goldfish");
        aquarium.addCreature("Betta");
        aquarium.addCreature("Guppy");

        System.out.println("Aquarium contents:");
        for (String creature : aquarium.listCreatures()) {
            System.out.println(creature);
        }

        aquarium.feedAll();

        aquarium.removeCreature("Betta");

        System.out.println("\nAquarium contents after removing Betta:");
        for (String creature : aquarium.listCreatures()) {
            System.out.println(creature);
        }
    }
}