#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "smart_home.h"

SmartHome* create_smart_home(int capacity) {
    SmartHome* home = (SmartHome*)malloc(sizeof(SmartHome));
    home->devices = (Device**)malloc(sizeof(Device*) * capacity);
    home->size = 0;
    home->capacity = capacity;
    return home;
}

void add_device(SmartHome* home, Device* device) {
    if (home->size == home->capacity) {
        home->capacity *= 2;
        home->devices = (Device**)realloc(home->devices, sizeof(Device*) * home->capacity);
    }
    home->devices[home->size++] = device;
}

void turn_on_all(SmartHome* home) {
    for (int i = 0; i < home->size; i++) {
        home->devices[i]->is_on = 1;
    }
}

void turn_off_all(SmartHome* home) {
    for (int i = 0; i < home->size; i++) {
        home->devices[i]->is_on = 0;
    }
}

const char* get_device_status(Device* device) {
    return device->is_on ? "on" : "off";
}

void free_smart_home(SmartHome* home) {
    for (int i = 0; i < home->size; i++) {
        free(home->devices[i]);
    }
    free(home->devices);
    free(home);
}