#include <iostream>

int main() {
    int speed;
    int time;

    std::cout << "What is the speed of the vehicle in mph? ";
    std::cin >> speed;

    while (speed < 0) {
        std::cout << "Speed cannot be negative. Please enter a positive value: ";
        std::cin >> speed;
    }

    std::cout << "How many hours has it traveled? ";
    std::cin >> time;

    while (time < 1) {
        std::cout << "Time traveled cannot be less than 1 hour. Please enter a valid value: ";
        std::cin >> time;
    }

    std::cout << "Hour\tDistance Traveled\n";
    std::cout << "------------------------\n";

    for (int hour = 1; hour <= time; hour++) {
        int distance = speed * hour;
        std::cout << hour << "\t" << distance << "\n";
    }

    return 0;
}