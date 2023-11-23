#include <iostream>

int main() {
    int number;

    std::cout << "Nhap vao mot so tu 1 den 10: ";
    std::cin >> number;

    switch (number) {
    case 1:
        std::cout << "So La Ma tuong ung: I" << std::endl;
        break;
    case 2:
        std::cout << "So La Ma tuong ung: II" << std::endl;
        break;
    case 3:
        std::cout << "So La Ma tuong ung: III" << std::endl;
        break;
    case 4:
        std::cout << "So La Ma tuong ung: IV" << std::endl;
        break;
    case 5:
        std::cout << "So La Ma tuong ung: V" << std::endl;
        break;
    case 6:
        std::cout << "So La Ma tuong ung: VI" << std::endl;
        break;
    case 7:
        std::cout << "So La Ma tuong ung: VII" << std::endl;
        break;
    case 8:
        std::cout << "So La Ma tuong ung: VIII" << std::endl;
        break;
    case 9:
        std::cout << "So La Ma tuong ung: IX" << std::endl;
        break;
    case 10:
        std::cout << "So La Ma tuong ung: X" << std::endl;
        break;
    default:
        std::cout << "So nhap vao khong hop le!" << std::endl;
        break;
    }

    return 0;
}