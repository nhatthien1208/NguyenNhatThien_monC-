#include <iostream>
#include <iomanip>

int main() {
    double diem1, diem2, diem3, diem4, diem5;

    std::cout << "Nhap diem bai kiem tra thu 1: ";
    std::cin >> diem1;
    std::cout << "Nhap diem bai kiem tra thu 2: ";
    std::cin >> diem2;
    std::cout << "Nhap diem bai kiem tra thu 3: ";
    std::cin >> diem3;
    std::cout << "Nhap diem bai kiem tra thu 4: ";
    std::cin >> diem4;
    std::cout << "Nhap diem bai kiem tra thu 5: ";
    std::cin >> diem5;

    double diemTrungBinh = (diem1 + diem2 + diem3 + diem4 + diem5) / 5.0;

    std::cout << "Diem kiem tra trung binh: " << std::fixed << std::setprecision(1) << diemTrungBinh << "\n";

    return 0;
}