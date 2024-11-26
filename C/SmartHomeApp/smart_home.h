#ifndef SMART_HOME_H
#define SMART_HOME_H

typedef struct {
    char* name;
    int is_on;
} Device;

typedef struct {
    Device** devices;
    int size;
    int capacity;
} SmartHome;

SmartHome* create_smart_home(int capacity);
void add_device(SmartHome* home, Device* device);
void turn_on_all(SmartHome* home);
void turn_off_all(SmartHome* home);
const char* get_device_status(Device* device);
void free_smart_home(SmartHome* home);

#endif