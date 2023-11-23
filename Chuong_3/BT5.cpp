#include <iostream>
#include <iomanip>

int main() {
    int soNam, soNu;

    std::cout << "Nhap so luong nam da dang ky: ";
    std::cin >> soNam;
    std::cout << "Nhap so luong nu da dang ky: ";
    std::cin >> soNu;

    int tongHocSinh = soNam + soNu;
    double tyLeNam = static_cast<double>(soNam) / tongHocSinh * 100.0;
    double tyLeNu = static_cast<double>(soNu) / tongHocSinh * 100.0;

    std::cout << "Ty le nam trong lop hoc: " << std::fixed << std::setprecision(1) << tyLeNam << "%\n";
    std::cout << "Ty le nu trong lop hoc: " << std::fixed << std::setprecision(1) << tyLeNu << "%\n";

    return 0;
}