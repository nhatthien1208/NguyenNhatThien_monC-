#include <iostream>

int main() {
    double doCelsius;

    std::cout << "Nhap nhiet do Celsius: ";
    std::cin >> doCelsius;

    double doFahrenheit = (doCelsius * 9 / 5) + 32;

    std::cout << "Nhiet do Fahrenheit tuong ung: " << doFahrenheit << " °F\n";

    return 0;
}