#include <iostream>
#include "smart_home.h"

int main() {
    SmartHome<Device> home;

    Device light("Light");
    Device thermostat("Thermostat");
    Device speaker("Speaker");

    home.AddDevice(light);
    home.AddDevice(thermostat);
    home.AddDevice(speaker);

    std::cout << "Initial device statuses:" << std::endl;
    std::cout << "Light: " << home.GetDeviceStatus(light) << std::endl;
    std::cout << "Thermostat: " << home.GetDeviceStatus(thermostat) << std::endl;
    std::cout << "Speaker: " << home.GetDeviceStatus(speaker) << std::endl;

    home.TurnOnAll();
    std::cout << "After turning on all devices:" << std::endl;
    std::cout << "Light: " << home.GetDeviceStatus(light) << std::endl;
    std::cout << "Thermostat: " << home.GetDeviceStatus(thermostat) << std::endl;
    std::cout << "Speaker: " << home.GetDeviceStatus(speaker) << std::endl;

    home.TurnOffAll();
    std::cout << "After turning off all devices:" << std::endl;
    std::cout << "Light: " << home.GetDeviceStatus(light) << std::endl;
    std::cout << "Thermostat: " << home.GetDeviceStatus(thermostat) << std::endl;
    std::cout << "Speaker: " << home.GetDeviceStatus(speaker) << std::endl;

    return 0;
}