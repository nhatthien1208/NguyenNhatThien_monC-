#include <iostream>

int main() {
    const int CALO_KHAU_PHAN = 300;
    const int KHAU_PHAN_TRONG_TUI = 10;
    const int SO_BANH_QUY_TRONG_TUI = 30;

    int soLuongBanhQuyAn;

    std::cout << "Nhap so luong banh quy ban da an: ";
    std::cin >> soLuongBanhQuyAn;

    double soLuongKhauPhan = static_cast<double>(soLuongBanhQuyAn) / SO_BANH_QUY_TRONG_TUI * KHAU_PHAN_TRONG_TUI;
    int soCaloTieuThu = soLuongKhauPhan * CALO_KHAU_PHAN;

    std::cout << "Tong so calo da tieu thu: " << soCaloTieuThu << " calo\n";

    return 0;
}