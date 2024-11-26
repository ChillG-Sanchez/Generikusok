public class Main {
    public static void main(String[] args) {
        SmartHome<Device> smartHome = new SmartHome<>();
        Device light = new Device("Light");
        Device thermostat = new Device("Thermostat");
        Device speaker = new Device("Speaker");

        smartHome.addDevice(light);
        smartHome.addDevice(thermostat);
        smartHome.addDevice(speaker);

        System.out.println("SmartHome devices status:");
        smartHome.printDevices();

        smartHome.turnOnAll();
        System.out.println("\nAfter turning on all devices:");
        smartHome.printDevices();

        smartHome.turnOffAll();
        System.out.println("\nAfter turning off all devices:");
        smartHome.printDevices();

        System.out.println("\nStatus of the thermostat:");
        System.out.println(smartHome.getDeviceStatus(thermostat));
    }
}