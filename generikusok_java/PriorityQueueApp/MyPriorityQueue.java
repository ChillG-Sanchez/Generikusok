import java.util.Comparator;
import java.util.PriorityQueue;

public class MyPriorityQueue<T> {
    private static class Element<T> {
        T item;
        int priority;

        Element(T item, int priority) {
            this.item = item;
            this.priority = priority;
        }
    }

    private PriorityQueue<Element<T>> queue;

    public MyPriorityQueue() {
        queue = new PriorityQueue<>(Comparator.comparingInt(e -> e.priority));
    }

    public void Enqueue(T item, int priority) {
        queue.add(new Element<>(item, priority));
    }

    public T Dequeue() {
        if (queue.isEmpty()) {
            throw new IllegalStateException("The queue is empty.");
        }
        return queue.poll().item;
    }

    public T Peek() {
        if (queue.isEmpty()) {
            throw new IllegalStateException("The queue is empty.");
        }
        return queue.peek().item;
    }

    public int size() {
        return queue.size();
    }
}