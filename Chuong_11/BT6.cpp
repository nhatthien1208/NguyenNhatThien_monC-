#include <iostream>
#include <string>
using namespace std;

const int SO_CAU_THU = 12;

struct CauThu
{
    string ten;
    int soCuaCauThu;
    int diemGhiDuoc;
};

void nhapThongTinCauThu(CauThu& cauThu)
{
    cout << "Nhập thông tin về cầu thủ:" << endl;
    cout << "Tên cầu thủ: ";
    getline(cin, cauThu.ten);
    cout << "Số của cầu thủ: ";
    cin >> cauThu.soCuaCauThu;
    cout << "Số điểm ghi được: ";
    cin >> cauThu.diemGhiDuoc;

    while (cauThu.soCuaCauThu < 0 || cauThu.diemGhiDuoc < 0)
    {
        cout << "Số hoặc điểm ghi được không hợp lệ. Vui lòng nhập lại." << endl;
        cout << "Số của cầu thủ: ";
        cin >> cauThu.soCuaCauThu;
        cout << "Số điểm ghi được: ";
        cin >> cauThu.diemGhiDuoc;
    }

    cin.ignore(); // Xóa bộ đệm để đọc chuỗi kế tiếp
}

void hienThiThongTinCauThu(const CauThu& cauThu)
{
    cout << "Tên cầu thủ: " << cauThu.ten << endl;
    cout << "Số của cầu thủ: " << cauThu.soCuaCauThu << endl;
    cout << "Số điểm ghi được: " << cauThu.diemGhiDuoc << endl;
}

void tinhToanThongKe(const CauThu cauThu[], int& tongDiem, string& cauThuGhiNhieuDiemNhat)
{
    tongDiem = 0;
    int maxDiem = cauThu[0].diemGhiDuoc;
    cauThuGhiNhieuDiemNhat = cauThu[0].ten;

    for (int i = 0; i < SO_CAU_THU; i++)
    {
        tongDiem += cauThu[i].diemGhiDuoc;

        if (cauThu[i].diemGhiDuoc > maxDiem)
        {
            maxDiem = cauThu[i].diemGhiDuoc;
            cauThuGhiNhieuDiemNhat = cauThu[i].ten;
        }
    }
}

int main()
{
    CauThu cauThu[SO_CAU_THU];

    for (int i = 0; i < SO_CAU_THU; i++)
    {
        nhapThongTinCauThu(cauThu[i]);
        cout << endl;
    }

    cout << "Thông tin về các cầu thủ:" << endl;

    for (int i = 0; i < SO_CAU_THU; i++)
    {
        hienThiThongTinCauThu(cauThu[i]);
        cout << endl;
    }

    int tongDiem;
    string cauThuGhiNhieuDiemNhat;

    tinhToanThongKe(cauThu, tongDiem, cauThuGhiNhieuDiemNhat);

    cout << "Tổng số điểm đạt được của đội: " << tongDiem << endl;
    cout << "Cầu thủ ghi nhiều điểm nhất: " << cauThuGhiNhieuDiemNhat << endl;

    return 0;
}