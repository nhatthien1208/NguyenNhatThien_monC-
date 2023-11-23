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

    Coin myCoin;
    std::cout << "Mặt ban đầu của đồng xu: " << myCoin.getSideUp() << std::endl;

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; i++) {
        myCoin.toss();
        std::string side = myCoin.getSideUp();
        std::cout << "Lần " << i + 1 << ": " << side << std::endl;

        if (side == "heads") {
            headsCount++;
        }
        else {
            tailsCount++;
        }
    }

    std::cout << "\nSố lần mặt ngửa lên: " << headsCount << std::endl;
    std::cout << "Số lần mặt đồng xu hướng lên: " << tailsCount << std::endl;

    return 0;
}