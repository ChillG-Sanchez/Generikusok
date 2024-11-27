#include "timestamped_value.h"
#include <string>

template <typename T>
TimestampedValue<T>::TimestampedValue(T value) : value(value), timestamp(std::time(nullptr)) {}

template <typename T>
void TimestampedValue<T>::UpdateValue(T newValue) {
    value = newValue;
    timestamp = std::time(nullptr);
}

template <typename T>
double TimestampedValue<T>::GetAge() const {
    return std::difftime(std::time(nullptr), start_time);
}

template class TimestampedValue<int>;
template class TimestampedValue<std::string>;