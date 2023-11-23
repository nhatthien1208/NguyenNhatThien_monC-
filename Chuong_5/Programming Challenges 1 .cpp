#include <iostream>

int main() {
    int number;
    int sum = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Input validation
    while (number <= 0) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin >> number;
    }

    // Calculate the sum
    for (int i = 1; i <= number; i++) {
        sum += i;
    }

    std::cout << "The sum of numbers from 1 to " << number << " is: " << sum << std::endl;

    return 0;
}