#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "timestamped_value.h"

TimestampedValue* create_timestamped_value(void *value) {
    TimestampedValue *tv = (TimestampedValue*)malloc(sizeof(TimestampedValue));
    if (!tv) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    tv->value = value;
    tv->timestamp = time(NULL);
    return tv;
}

void update_value(TimestampedValue *tv, void *new_value) {
    tv->value = new_value;
    tv->timestamp = time(NULL);
}

double get_age(const TimestampedValue *tv) {
    time_t now = time(NULL);
    return difftime(now, tv->timestamp);
}

void free_timestamped_value(TimestampedValue *tv) {
    free(tv);
}
