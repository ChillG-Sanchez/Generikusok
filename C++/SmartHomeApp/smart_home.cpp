#include "smart_home.h"

template <typename T>
void SmartHome<T>::AddDevice(T device) {
    devices.push_back(device);
}

template <typename T>
void SmartHome<T>::TurnOnAll() {
    for (auto& device : devices) {
        device.TurnOn();
    }
}

template <typename T>
void SmartHome<T>::TurnOffAll() {
    for (auto& device : devices) {
        device.TurnOff();
    }
}

template <typename T>
std::string SmartHome<T>::GetDeviceStatus(const T& device) const {
    auto it = std::find_if(devices.begin(), devices.end(), [&device](const T& d) {
        return d.GetName() == device.GetName();
    });
    if (it != devices.end()) {
        return it->GetStatus();
    }
    return "Device not found";
}

template class SmartHome<Device>;