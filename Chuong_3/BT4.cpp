#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string thang1, thang2, thang3;
    double luongMua1, luongMua2, luongMua3;

    std::cout << "Nhap ten thang thu 1: ";
    std::cin >> thang1;
    std::cout << "Nhap luong mua trong thang " << thang1 << " (inch): ";
    std::cin >> luongMua1;

    std::cout << "Nhap ten thang thu 2: ";
    std::cin >> thang2;
    std::cout << "Nhap luong mua trong thang " << thang2 << " (inch): ";
    std::cin >> luongMua2;

    std::cout << "Nhap ten thang thu 3: ";
    std::cin >> thang3;
    std::cout << "Nhap luong mua trong thang " << thang3 << " (inch): ";
    std::cin >> luongMua3;

    double luongMuaTrungBinh = (luongMua1 + luongMua2 + luongMua3) / 3.0;

    std::cout << "Luong mua trung binh trong " << thang1 << ", " << thang2 << " va " << thang3 << " la " << std::fixed << std::setprecision(1) << luongMuaTrungBinh << " inch.\n";

    return 0;
}