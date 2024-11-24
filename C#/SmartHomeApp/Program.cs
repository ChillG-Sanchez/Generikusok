using System;

namespace SmartHomeApp
{
    class Program
    {
        static void Main(string[] args)
        {
            SmartHome<ISmartDevice> smartHome = new SmartHome<ISmartDevice>();

            ISmartDevice light = new SmartLight();
            ISmartDevice thermostat = new SmartThermostat();

            smartHome.AddDevice(light);
            smartHome.AddDevice(thermostat);

            smartHome.TurnOnAll();
            Console.WriteLine("Light status: " + smartHome.GetDeviceStatus(light));
            Console.WriteLine("Thermostat status: " + smartHome.GetDeviceStatus(thermostat));

            smartHome.TurnOffAll();
            Console.WriteLine("Light status: " + smartHome.GetDeviceStatus(light));
            Console.WriteLine("Thermostat status: " + smartHome.GetDeviceStatus(thermostat));
        }
    }

    public class SmartLight : ISmartDevice
    {
        private bool isOn = false;

        public void TurnOn()
        {
            isOn = true;
        }

        public void TurnOff()
        {
            isOn = false;
        }

        public string GetStatus()
        {
            return isOn ? "On" : "Off";
        }
    }

    public class SmartThermostat : ISmartDevice
    {
        private bool isOn = false;

        public void TurnOn()
        {
            isOn = true;
        }

        public void TurnOff()
        {
            isOn = false;
        }

        public string GetStatus()
        {
            return isOn ? "On" : "Off";
        }
    }
}