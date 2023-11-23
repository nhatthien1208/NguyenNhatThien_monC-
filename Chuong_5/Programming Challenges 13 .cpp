#include <iostream>
#include <climits>

int main() {
    int number;
    int largest = INT_MIN;
    int smallest = INT_MAX;

    std::cout << "Nhập một chuỗi số nguyên (-99 để kết thúc):\n";

    while (true) {
        std::cout << "Nhập số nguyên: ";
        std::cin >> number;

        if (number == -99) {
            break;
        }

        if (number > largest) {
            largest = number;
        }

        if (number < smallest) {
            smallest = number;
        }
    }

    std::cout << "Số lớn nhất: " << largest << std::endl;
    std::cout << "Số nhỏ nhất: " << smallest << std::endl;

    return 0;
}