#include <iostream>

int main() {
    double soGallon;
    double soDam;
    double tiLeTieuThu;

    std::cout << "Nhap so gallon xang xe co the chua duoc: ";
    std::cin >> soGallon;
    std::cout << "Nhap so dam xe co the di duoc voi tang day xang: ";
    std::cin >> soDam;

    tiLeTieuThu = soDam / soGallon;

    std::cout << "So km co the di duoc moi gallon xang: " << tiLeTieuThu << " km/gallon\n";

    return 0;
}