#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomNumber() {
    return rand() % 1000; 

int main() 
{
    srand(time(0)); 

    int num1 = generateRandomNumber();
    int num2 = generateRandomNumber();

    std::cout << "Hãy tính tổng của hai số sau đây:" << std::endl;
    std::cout << "  " << num1 << std::endl;
    std::cout << "+ " << num2 << std::endl;

    int answer;
    std::cout << "Nhập câu trả lời: ";
    std::cin >> answer;

    int correctAnswer = num1 + num2;

    if (answer == correctAnswer) {
        std::cout << "Chúc mừng! Câu trả lời của bạn đúng." << std::endl;
    }
    else {
        std::cout << "Rất tiếc, câu trả lời của bạn sai." << std::endl;
        std::cout << "Câu trả lời đúng là: " << correctAnswer << std::endl;
    }

    return 0;
}