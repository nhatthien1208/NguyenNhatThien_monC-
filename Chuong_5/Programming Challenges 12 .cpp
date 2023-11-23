#include <iostream>

int main() {
    std::cout << "Bảng chuyển đổi nhiệt độ Celsius sang Fahrenheit:\n";
    std::cout << "----------------------------------------------\n";
    std::cout << "Celsius    Fahrenheit\n";
    std::cout << "-------    ----------\n";

    for (int celsius = 0; celsius <= 20; celsius++) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        std::cout << celsius << "°C        " << fahrenheit << "°F\n";
    }

    return 0;
}