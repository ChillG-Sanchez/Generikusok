using System;
using System.Collections.Generic;

namespace SmartHomeApp
{
    public interface ISmartDevice
    {
        void TurnOn();
        void TurnOff();
        string GetStatus();
    }

    public class SmartHome<T> where T : ISmartDevice
    {
        private List<T> devices = new List<T>();

        public void AddDevice(T device)
        {
            devices.Add(device);
        }

        public void TurnOnAll()
        {
            foreach (var device in devices)
            {
                device.TurnOn();
            }
        }

        public void TurnOffAll()
        {
            foreach (var device in devices)
            {
                device.TurnOff();
            }
        }

        public string GetDeviceStatus(T device)
        {
            if (devices.Contains(device))
            {
                return device.GetStatus();
            }
            else
            {
                throw new InvalidOperationException("Device not found in the smart home.");
            }
        }
    }
}