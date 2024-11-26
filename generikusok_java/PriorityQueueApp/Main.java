public class Main {
    public static void main(String[] args) {
        MyPriorityQueue<String> priorityQueue = new MyPriorityQueue<>();

        priorityQueue.Enqueue("Low priority task", 3);
        priorityQueue.Enqueue("Medium priority task", 2);
        priorityQueue.Enqueue("High priority task", 1);

        System.out.println("Peek: " + priorityQueue.Peek());
        System.out.println("Dequeue: " + priorityQueue.Dequeue());
        System.out.println("Dequeue: " + priorityQueue.Dequeue());
        System.out.println("Dequeue: " + priorityQueue.Dequeue());
    }
}