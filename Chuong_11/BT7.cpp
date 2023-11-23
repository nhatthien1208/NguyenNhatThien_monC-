#include <iostream>
#include <string>
using namespace std;

const int SO_TAI_KHOAN = 12;

struct TaiKhoan
{
    string tenKhachHang;
    string soTaiKhoan;
    double soDu;
};

void nhapThongTinTaiKhoan(TaiKhoan& taiKhoan)
{
    cout << "Nhập thông tin về tài khoản:" << endl;
    cout << "Tên khách hàng: ";
    getline(cin, taiKhoan.tenKhachHang);
    cout << "Số tài khoản: ";
    getline(cin, taiKhoan.soTaiKhoan);
    cout << "Số dư: ";
    cin >> taiKhoan.soDu;

    while (taiKhoan.soDu < 0)
    {
        cout << "Số dư không hợp lệ. Vui lòng nhập lại." << endl;
        cout << "Số dư: ";
        cin >> taiKhoan.soDu;
    }

    cin.ignore(); // Xóa bộ đệm để đọc chuỗi kế tiếp
}

void hienThiThongTinTaiKhoan(const TaiKhoan& taiKhoan)
{
    cout << "Tên khách hàng: " << taiKhoan.tenKhachHang << endl;
    cout << "Số tài khoản: " << taiKhoan.soTaiKhoan << endl;
    cout << "Số dư: " << taiKhoan.soDu << endl;
}

void timKiemTaiKhoan(const TaiKhoan taiKhoan[], int soTaiKhoan, const string& phanTen)
{
    bool timThay = false;

    cout << "Các tài khoản phù hợp với tên khách hàng: " << endl;

    for (int i = 0; i < soTaiKhoan; i++)
    {
        if (taiKhoan[i].tenKhachHang.find(phanTen) != string::npos)
        {
            hienThiThongTinTaiKhoan(taiKhoan[i]);
            cout << endl;
            timThay = true;
        }
    }

    if (!timThay)
    {
        cout << "Không tìm thấy tài khoản nào phù hợp với tên khách hàng." << endl;
    }
}

int main()
{
    TaiKhoan taiKhoan[SO_TAI_KHOAN];

    for (int i = 0; i < SO_TAI_KHOAN; i++)
    {
        nhapThongTinTaiKhoan(taiKhoan[i]);
        cout << endl;
    }

    cout << "Thông tin về các tài khoản:" << endl;

    for (int i = 0; i < SO_TAI_KHOAN; i++)
    {
        hienThiThongTinTaiKhoan(taiKhoan[i]);
        cout << endl;
    }

    string phanTen;

    cout << "Nhập một phần của tên khách hàng để tìm kiếm: ";
    getline(cin, phanTen);

    cout << endl;

    timKiemTaiKhoan(taiKhoan, SO_TAI_KHOAN, phanTen);

    return 0;
}