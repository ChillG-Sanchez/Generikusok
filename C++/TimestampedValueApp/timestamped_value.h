#ifndef TIMESTAMPED_VALUE_H
#define TIMESTAMPED_VALUE_H

#include <ctime>

template <typename T>
class TimestampedValue {
public:
    TimestampedValue(T value);
    void UpdateValue(T newValue);
    double GetAge() const;

private:
    T value;
    std::time_t timestamp;
    static std::time_t start_time;
};

template <typename T>
std::time_t TimestampedValue<T>::start_time = std::time(nullptr);

#endif