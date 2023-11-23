#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Thiết lập hạt giống ngẫu nhiên dựa trên thời gian hiện tại
    srand(time(0));

    // Sinh số ngẫu nhiên trong khoảng từ 1 đến 100
    int randomNumber = rand() % 100 + 1;

    int guess;
    bool correct = false;

    std::cout << "Trò chơi đoán số ngẫu nhiên\n";

    while (!correct) {
        std::cout << "Nhập số bạn đoán: ";
        std::cin >> guess;

        if (guess == randomNumber) {
            std::cout << "Chính xác! Bạn đã đoán đúng.\n";
            correct = true;
        }
        else if (guess > randomNumber) {
            std::cout << "Quá cao, hãy thử lại.\n";
        }
        else {
            std::cout << "Quá thấp, hãy thử lại.\n";
        }
    }

    return 0;
}