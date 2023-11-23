#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess;
    int guessCount = 0;
    bool correct = false;

    std::cout << "Trò chơi đoán số ngẫu nhiên\n";

    while (!correct) {
        std::cout << "Nhập số bạn đoán: ";
        std::cin >> guess;
        guessCount++;

        if (guess == randomNumber) {
            std::cout << "Chính xác! Bạn đã đoán đúng.\n";
            std::cout << "Số lượt đoán: " << guessCount << std::endl;
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