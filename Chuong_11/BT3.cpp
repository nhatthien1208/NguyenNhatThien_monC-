#include <iostream>
#include <string>
using namespace std;

struct PhanKhu
{
    string tenPhanKhu;
    double doanhThuQuy1;
    double doanhThuQuy2;
    double doanhThuQuy3;
    double doanhThuQuy4;
    double tongDoanhThuHangNam;
    double doanhThuTrungBinhHangQuy;
};

void nhapDuLieuBanHang(PhanKhu& phanKhu)
{
    cout << "Nhập thông tin về phân khu " << phanKhu.tenPhanKhu << ":" << endl;
    cout << "Doanh thu quý 1: $";
    cin >> phanKhu.doanhThuQuy1;
    cout << "Doanh thu quý 2: $";
    cin >> phanKhu.doanhThuQuy2;
    cout << "Doanh thu quý 3: $";
    cin >> phanKhu.doanhThuQuy3;
    cout << "Doanh thu quý 4: $";
    cin >> phanKhu.doanhThuQuy4;

    phanKhu.tongDoanhThuHangNam = phanKhu.doanhThuQuy1 + phanKhu.doanhThuQuy2 + phanKhu.doanhThuQuy3 + phanKhu.doanhThuQuy4;
    phanKhu.doanhThuTrungBinhHangQuy = phanKhu.tongDoanhThuHangNam / 4;
}

void hienThiDuLieuBanHang(const PhanKhu& phanKhu)
{
    cout << "Thông tin về phân khu " << phanKhu.tenPhanKhu << ":" << endl;
    cout << "Doanh thu quý 1: $" << phanKhu.doanhThuQuy1 << endl;
    cout << "Doanh thu quý 2: $" << phanKhu.doanhThuQuy2 << endl;
    cout << "Doanh thu quý 3: $" << phanKhu.doanhThuQuy3 << endl;
    cout << "Doanh thu quý 4: $" << phanKhu.doanhThuQuy4 << endl;
    cout << "Tổng doanh thu hàng năm: $" << phanKhu.tongDoanhThuHangNam << endl;
    cout << "Doanh thu trung bình hàng quý: $" << phanKhu.doanhThuTrungBinhHangQuy << endl;
}

int main()
{
    PhanKhu dong;
    dong.tenPhanKhu = "Đông";
    nhapDuLieuBanHang(dong);

    PhanKhu tay;
    tay.tenPhanKhu = "Tây";
    nhapDuLieuBanHang(tay);

    PhanKhu bac;
    bac.tenPhanKhu = "Bắc";
    nhapDuLieuBanHang(bac);

    PhanKhu nam;
    nam.tenPhanKhu = "Nam";
    nhapDuLieuBanHang(nam);

    cout << endl;
    hienThiDuLieuBanHang(dong);
    cout << endl;
    hienThiDuLieuBanHang(tay);
    cout << endl;
    hienThiDuLieuBanHang(bac);
    cout << endl;
    hienThiDuLieuBanHang(nam);

    return 0;
}