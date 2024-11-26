public class Main {
    public static void main(String[] args) {
        TimestampedValue<String> timestampedValue = new TimestampedValue<>("Initial value");

        System.out.println("Initial value: " + timestampedValue.getValue());
        System.out.println("Initial timestamp: " + timestampedValue.getTimestamp());
        System.out.println("Age in seconds: " + timestampedValue.GetAge());

        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        timestampedValue.UpdateValue("Updated value");

        System.out.println("Updated value: " + timestampedValue.getValue());
        System.out.println("Updated timestamp: " + timestampedValue.getTimestamp());
        System.out.println("Age in seconds: " + timestampedValue.GetAge());
    }
}