#ifndef TIMESTAMPED_VALUE_H
#define TIMESTAMPED_VALUE_H

#include <time.h>

typedef struct {
    void *value;
    time_t timestamp;
} TimestampedValue;

TimestampedValue* create_timestamped_value(void *value);
void update_value(TimestampedValue *tv, void *new_value);
double get_age(const TimestampedValue *tv);
void free_timestamped_value(TimestampedValue *tv);

#endif
