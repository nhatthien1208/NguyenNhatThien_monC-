#include <iostream>

int main() {
    const double TRONG_LUONG_VAT_DUNG = 12.5;

    double trongLuongPallet;

    std::cout << "Nhap trong luong cua pallet (pound): ";
    std::cin >> trongLuongPallet;

    int soLuongVatDung = static_cast<int>(trongLuongPallet / TRONG_LUONG_VAT_DUNG);

    std::cout << "So luong vat dung xep chong len nhau tren pallet: " << soLuongVatDung << "\n";

    return 0;
}