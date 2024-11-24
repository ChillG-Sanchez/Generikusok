using System;

namespace TimestampedValueApp
{
    public class TimestampedValue<T>
    {
        public T Value { get; private set; }
        public DateTime Timestamp { get; private set; }

        public TimestampedValue(T value)
        {
            Value = value;
            Timestamp = DateTime.Now;
        }

        public void UpdateValue(T newValue)
        {
            Value = newValue;
            Timestamp = DateTime.Now;
        }

        public double GetAge()
        {
            return (DateTime.Now - Timestamp).TotalSeconds;
        }
    }
}