#include <iostream>
#include <iomanip>

int main() {
    const double CHEN_DUONG = 1.5;
    const double COC_BO = 1.0;
    const double CHEN_BOT_MI = 2.75;
    const int SO_LUONG_BANH_QUY = 48;

    int soLuongBanhQuy;

    std::cout << "Nhap so luong banh quy ban muon tao: ";
    std::cin >> soLuongBanhQuy;

    double tyLe = static_cast<double>(soLuongBanhQuy) / SO_LUONG_BANH_QUY;
    double soChenDuong = CHEN_DUONG * tyLe;
    double soCocBo = COC_BO * tyLe;
    double soChenBotMi = CHEN_BOT_MI * tyLe;

    std::cout << "Sau khi tao " << soLuongBanhQuy << " banh quy, can co:\n";
    std::cout << "So chen duong: " << std::fixed << std::setprecision(2) << soChenDuong << " chen\n";
    std::cout << "So coc bo: " << std::fixed << std::setprecision(2) << soCocBo << " coc\n";
    std::cout << "So chen bot mi: " << std::fixed << std::setprecision(2) << soChenBotMi << " chen\n";

    return 0;
}