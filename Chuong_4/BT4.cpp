#include <iostream>

int main() {
    double length1, width1, area1;
    double length2, width2, area2;

    std::cout << "Nhap chieu dai hinh chu nhat thu nhat: ";
    std::cin >> length1;

    std::cout << "Nhap chieu rong hinh chu nhat thu nhat: ";
    std::cin >> width1;

    std::cout << "Nhap chieu dai hinh chu nhat thu hai: ";
    std::cin >> length2;

    std::cout << "Nhap chieu rong hinh chu nhat thu hai: ";
    std::cin >> width2;

    area1 = length1 * width1;
    area2 = length2 * width2;

    std::cout << "Dien tich hinh chu nhat thu nhat: " << area1 << std::endl;
    std::cout << "Dien tich hinh chu nhat thu hai: " << area2 << std::endl;

    if (area1 > area2) {
        std::cout << "Hinh chu nhat thu nhat co dien tich lon hon hinh chu nhat thu hai.\n";
    }
    else if (area1 < area2) {
        std::cout << "Hinh chu nhat thu nhat co dien tich nho hon hinh chu nhat thu hai.\n";
    }
    else {
        std::cout << "Hai hinh chu nhat co cung dien tich.\n";
    }

    return 0;
}