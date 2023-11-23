#include <iostream>
#include <cstdlib> 

class Coin {
private:
    std::string sideUp;

public:
    Coin() {
       
        int randomNum = rand() % 2; 
        if (randomNum == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }

    void toss() {
        n
        int randomNum = rand() % 2; 
        if (randomNum == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }

    std::string getSideUp() const {
        return sideUp;
    }
};

int main() {
    srand(time(0)); 

    Coin quarter; 
    Coin dime; 
    Coin nickel; 

    double balance = 0.0; 

    while (balance < 1.0) {
        quarter.toss();
        dime.toss();
        nickel.toss();

        std::string quarterSide = quarter.getSideUp();
        std::string dimeSide = dime.getSideUp();
        std::string nickelSide = nickel.getSideUp();

        if (quarterSide == "heads") {
            balance += 0.25;
        }
        if (dimeSide == "heads") {
            balance += 0.1;
        }
        if (nickelSide == "heads") {
            balance += 0.05;
        }
    }

    if (balance == 1.0) {
        std::cout << "Chúc mừng! Bạn đã thắng trò chơi và lấy được 1 đô la!" << std::endl;
    }
    else {
        std::cout << "Rất tiếc! Số dư của bạn vượt quá 1 đô la." << std::endl;
    }

    return 0;
}