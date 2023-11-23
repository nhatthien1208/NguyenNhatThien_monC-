#include <iostream>
#include <iomanip>
#include <string>

int main() {
    const double GIA_VE_NGUOI_LON = 10.0;
    const double GIA_VE_TRE_EM = 6.0;
    const double TY_LE_LOI_NHUAN = 0.2;

    std::string tenPhim;
    int soVeNguoiLon, soVeTreEm;

    std::cout << "Nhap ten phim: ";
    std::getline(std::cin, tenPhim);
    std::cout << "Nhap so luong ve nguoi lon da ban: ";
    std::cin >> soVeNguoiLon;
    std::cout << "Nhap so luong ve tre em da ban: ";
    std::cin >> soVeTreEm;

    double loiNhuanGop = (soVeNguoiLon * GIA_VE_NGUOI_LON) + (soVeTreEm * GIA_VE_TRE_EM);
    double loiNhuanRong = loiNhuanGop * TY_LE_LOI_NHUAN;
    double loiNhuanNhaPhanPhoi = loiNhuanGop - loiNhuanRong;

    std::cout << "Ten phim: " << tenPhim << "\n";
    std::cout << "Ve nguoi lon da ban: " << soVeNguoiLon << "\n";
    std::cout << "Ve tre em da ban: " << soVeTreEm << "\n";
    std::cout << "Loi nhuan gop phong ve: $" << std::fixed << std::setprecision(2) << loiNhuanGop << "\n";
    std::cout << "Loi nhuan phong ve rong: $" << std::fixed << std::setprecision(2) << loiNhuanRong << "\n";
    std::cout << "So tien tra cho nha phan phoi: $" << std::fixed << std::setprecision(2) << loiNhuanNhaPhanPhoi << "\n";

    return 0;
}