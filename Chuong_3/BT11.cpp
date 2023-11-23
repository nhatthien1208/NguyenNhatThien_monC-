#include <iostream>

int main() {
    double chiPhiVay, chiPhiBaoHiem, chiPhiXang, chiPhiDau, chiPhiLop, chiPhiBaoDuong;

    std::cout << "Nhap chi phi vay hang thang (USD): ";
    std::cin >> chiPhiVay;

    std::cout << "Nhap chi phi bao hiem hang thang (USD): ";
    std::cin >> chiPhiBaoHiem;

    std::cout << "Nhap chi phi xang hang thang (USD): ";
    std::cin >> chiPhiXang;

    std::cout << "Nhap chi phi dau hang thang (USD): ";
    std::cin >> chiPhiDau;

    std::cout << "Nhap chi phi lop hang thang (USD): ";
    std::cin >> chiPhiLop;

    std::cout << "Nhap chi phi bao duong hang thang (USD): ";
    std::cin >> chiPhiBaoDuong;

    double tongChiPhiHangThang = chiPhiVay + chiPhiBaoHiem + chiPhiXang + chiPhiDau + chiPhiLop + chiPhiBaoDuong;
    double tongChiPhiHangNam = tongChiPhiHangThang * 12;

    std::cout << "Tong chi phi hang thang: " << tongChiPhiHangThang << " USD\n";
    std::cout << "Tong chi phi hang nam: " << tongChiPhiHangNam << " USD\n";

    return 0;
}