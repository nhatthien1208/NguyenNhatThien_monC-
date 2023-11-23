#include <iostream>

int calculatePoints(int quantity) {
    int points = 0;

    if (quantity == 1) {
        points = 5;
    }
    else if (quantity == 2) {
        points = 15;
    }
    else if (quantity == 3) {
        points = 30;
    }
    else if (quantity >= 4) {
        points = 60;
    }

    return points;
}

int main() {
    int quantity;

    std::cout << "Nhập số lượng sách đã mua trong tháng này: ";
    std::cin >> quantity;

    int points = calculatePoints(quantity);

    std::cout << "Số điểm được thưởng là: " << points << std::endl;

    return 0;
}