import java.util.List;

public class Main {
    public static void main(String[] args) {
        Ranking<String> ranking = new Ranking<>();

        ranking.Add("Alice", 2);
        ranking.Add("Bob", 1);
        ranking.Add("Charlie", 3);

        System.out.println("Top 2:");
        List<String> top2 = ranking.GetTop(2);
        for (String item : top2) {
            System.out.println(item);
        }

        System.out.println("Top 3:");
        List<String> top3 = ranking.GetTop(3);
        for (String item : top3) {
            System.out.println(item);
        }
    }
}