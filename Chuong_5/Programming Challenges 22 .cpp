#include <iostream>

int main() {
    int sideLength;

    std::cout << "Nhập độ dài cạnh hình vuông (tối đa 15): ";
    std::cin >> sideLength;

    if (sideLength <= 0 || sideLength > 15) {
        std::cout << "Số không hợp lệ. Vui lòng nhập một số nguyên dương không lớn hơn 15." << std::endl;
        return 0;
    }

    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            std::cout << "X";
        }
        std::cout << std::endl;
    }

    return 0;
}