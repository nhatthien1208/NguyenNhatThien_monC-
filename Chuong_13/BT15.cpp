#include <iostream>
#include <cstdlib> 
#include <ctime> 

class Die {
private:
    int sides;
    int value;

public:
    Die(int numSides) {
        sides = numSides;
        value = 1;
    }

    void roll() {
        value = rand() % sides + 1; 
    }

    int getValue() const {
        return value;
    }
};

int main() {
    srand(time(0)); 

    Die die(6); 

    int totalPoints = 0; 

    char choice;
    do {
        std::cout << "Bạn có muốn câu cá? (y/n): ";
        std::cin >> choice;

        if (choice == 'y') {
            die.roll();
            int result = die.getValue();

            if (result == 1) {
                std::cout << "Bạn đã bắt được một con cá khổng lồ! +10 điểm" << std::endl;
                totalPoints += 10;
            }
            else if (result == 2) {
                std::cout << "Bạn đã bắt được một chiếc giày cũ! +2 điểm" << std::endl;
                totalPoints += 2;
            }
            else if (result == 3) {
                std::cout << "Bạn đã bắt được một con cá nhỏ! +5 điểm" << std::endl;
                totalPoints += 5;
            }
            else {
                std::cout << "Bạn đã bắt được một vật phẩm không xác định! +1 điểm" << std::endl;
                totalPoints += 1;
            }
        }
    } while (choice != 'n');

    std::cout << "Tổng số điểm câu cá của bạn: " << totalPoints << std::endl;

    if (totalPoints >= 10) {
        std::cout << "Chúc mừng! Bạn là một câu thủ giỏi!" << std::endl;
    }
    else if (totalPoints >= 5) {
        std::cout << "Bạn đã câu được một số vật phẩm đáng chú ý!" << std::endl;
    }
    else {
        std::cout << "Bạn cần cố gắng nhiều hơn để câu được nhiều điểm hơn!" << std::endl;
    }

    return 0;
}