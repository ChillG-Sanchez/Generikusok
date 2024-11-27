#ifndef SMART_HOME_H
#define SMART_HOME_H

#include <vector>
#include <string>
#include <algorithm>

class Device {
public:
    Device(const std::string& name) : name(name), is_on(false) {}
    void TurnOn() { is_on = true; }
    void TurnOff() { is_on = false; }
    std::string GetStatus() const { return is_on ? "on" : "off"; }
    std::string GetName() const { return name; }

private:
    std::string name;
    bool is_on;
};

template <typename T>
class SmartHome {
public:
    void AddDevice(T device);
    void TurnOnAll();
    void TurnOffAll();
    std::string GetDeviceStatus(const T& device) const;

private:
    std::vector<T> devices;
};

#endif