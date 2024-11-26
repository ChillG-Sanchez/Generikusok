#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "smart_home.h"

Device* create_device(const char* name) {
    Device* device = (Device*)malloc(sizeof(Device));
    device->name = strdup(name);
    device->is_on = 0;
    return device;
}

void print_device_status(Device* device) {
    printf("Device %s is %s\n", device->name, get_device_status(device));
}

int main() {
    SmartHome* home = create_smart_home(10);

    Device* light = create_device("Light");
    Device* thermostat = create_device("Thermostat");
    Device* speaker = create_device("Speaker");

    add_device(home, light);
    add_device(home, thermostat);
    add_device(home, speaker);

    printf("Initial device statuses:\n");
    print_device_status(light);
    print_device_status(thermostat);
    print_device_status(speaker);

    turn_on_all(home);
    printf("\nAfter turning on all devices:\n");
    print_device_status(light);
    print_device_status(thermostat);
    print_device_status(speaker);

    turn_off_all(home);
    printf("\nAfter turning off all devices:\n");
    print_device_status(light);
    print_device_status(thermostat);
    print_device_status(speaker);

    free_smart_home(home);
    return 0;
}