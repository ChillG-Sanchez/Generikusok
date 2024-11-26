import java.util.ArrayList;
import java.util.List;

class Device {
    private String name;
    private boolean isOn;

    public Device(String name) {
        this.name = name;
        this.isOn = false;
    }

    public void turnOn() {
        isOn = true;
    }

    public void turnOff() {
        isOn = false;
    }

    public boolean isOn() {
        return isOn;
    }

    @Override
    public String toString() {
        return name + " is " + (isOn ? "on" : "off");
    }
}

public class SmartHome<T extends Device> {
    private List<T> devices;

    public SmartHome() {
        devices = new ArrayList<>();
    }

    public void addDevice(T device) {
        devices.add(device);
    }

    public void turnOnAll() {
        for (T device : devices) {
            device.turnOn();
        }
    }

    public void turnOffAll() {
        for (T device : devices) {
            device.turnOff();
        }
    }

    public String getDeviceStatus(T device) {
        return device.toString();
    }

    public void printDevices() {
        for (T device : devices) {
            System.out.println(device);
        }
    }
}