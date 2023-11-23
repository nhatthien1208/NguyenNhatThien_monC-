#include <iostream>

int main() {
    double chiPhiThayThe;

    std::cout << "Nhap chi phi thay the cua toa nha (USD): ";
    std::cin >> chiPhiThayThe;

    double soTienBaoHiem = chiPhiThayThe * 0.8;

    std::cout << "So tien bao hiem toi thieu can mua: " << soTienBaoHiem << " USD\n";

    return 0;
}