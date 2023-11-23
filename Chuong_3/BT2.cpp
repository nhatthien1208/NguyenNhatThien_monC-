#include <iostream>
#include <iomanip>

int main() {
    int soVeA, soVeB, soVeC;
    const double giaVeA = 15.0;
    const double giaVeB = 12.0;
    const double giaVeC = 9.0;

    std::cout << "Nhap so ve da duoc ban cho loai ve A: ";
    std::cin >> soVeA;
    std::cout << "Nhap so ve da duoc ban cho loai ve B: ";
    std::cin >> soVeB;
    std::cout << "Nhap so ve da duoc ban cho loai ve C: ";
    std::cin >> soVeC;

    double tongThuNhap = soVeA * giaVeA + soVeB * giaVeB + soVeC * giaVeC;

    std::cout << "Tong thu nhap duoc tu viec ban ve: $" << std::fixed << std::setprecision(2) << tongThuNhap << "\n";

    return 0;
}