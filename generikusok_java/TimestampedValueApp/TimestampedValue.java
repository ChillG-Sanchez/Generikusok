import java.time.LocalDateTime;
import java.time.Duration;

public class TimestampedValue<T> {
    private T value;
    private LocalDateTime timestamp;

    public TimestampedValue(T value) {
        this.value = value;
        this.timestamp = LocalDateTime.now();
    }

    public void UpdateValue(T newValue) {
        this.value = newValue;
        this.timestamp = LocalDateTime.now();
    }

    public long GetAge() {
        return Duration.between(this.timestamp, LocalDateTime.now()).getSeconds();
    }

    public T getValue() {
        return value;
    }

    public LocalDateTime getTimestamp() {
        return timestamp;
    }
}