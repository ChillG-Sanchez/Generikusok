#include <iostream>
#include <thread>
#include <chrono>
#include "timestamped_value.h"

int main() {
    TimestampedValue<int> tv(42);

    std::cout << "Initial value: 42" << std::endl;
    std::cout << "Age: " << tv.GetAge() << " seconds" << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(2));

    tv.UpdateValue(84);
    std::cout << "Updated value: 84" << std::endl;
    std::cout << "Age: " << tv.GetAge() << " seconds" << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(3));

    std::cout << "Age after 3 more seconds: " << tv.GetAge() << " seconds" << std::endl;

    return 0;
}