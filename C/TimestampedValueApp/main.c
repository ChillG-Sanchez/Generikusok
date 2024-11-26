#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "timestamped_value.h"

int main() {
    char *initial_value = strdup("Initial value");
    TimestampedValue *tv = create_timestamped_value(initial_value);

    time_t initial_timestamp = tv->timestamp;

    printf("Age: %.2f seconds\n", difftime(time(NULL), initial_timestamp));

    sleep(2);
    char *new_value = strdup("Updated value");
    update_value(tv, new_value);

    printf("Updated value: %s\n", (char*)tv->value);
    printf("Age after update: %.2f seconds\n", difftime(time(NULL), initial_timestamp));

    sleep(3);
    printf("Age after 3 more seconds: %.2f seconds\n", difftime(time(NULL), initial_timestamp));

    free((char*)tv->value);
    free_timestamped_value(tv);

    return 0;
}
