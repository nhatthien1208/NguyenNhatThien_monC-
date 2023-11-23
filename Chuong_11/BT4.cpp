#include <iostream>
#include <string>
using namespace std;

const int SO_THANG_TRONG_NAM = 12;

struct ThoiTiet
{
    double tongLuongMua;
    double nhietDoCao;
    double nhietDoThap;
    double nhietDoTrungBinh;
};

void nhapDuLieuThoiTiet(ThoiTiet& thang)
{
    cout << "Nhập thông tin về tháng:" << endl;
    cout << "Tổng lượng mưa (inch): ";
    cin >> thang.tongLuongMua;
    cout << "Nhiệt độ cao (độ F): ";
    cin >> thang.nhietDoCao;
    cout << "Nhiệt độ thấp (độ F): ";
    cin >> thang.nhietDoThap;

    while (thang.nhietDoCao < -100 || thang.nhietDoCao > 140 || thang.nhietDoThap < -100 || thang.nhietDoThap > 140)
    {
        cout << "Nhiệt độ không hợp lệ. Vui lòng nhập lại." << endl;
        cout << "Nhiệt độ cao (độ F): ";
        cin >> thang.nhietDoCao;
        cout << "Nhiệt độ thấp (độ F): ";
        cin >> thang.nhietDoThap;
    }

    thang.nhietDoTrungBinh = (thang.nhietDoCao + thang.nhietDoThap) / 2;
}

void hienThiDuLieuThoiTiet(const ThoiTiet& thang)
{
    cout << "Thông tin về tháng:" << endl;
    cout << "Tổng lượng mưa (inch): " << thang.tongLuongMua << endl;
    cout << "Nhiệt độ cao (độ F): " << thang.nhietDoCao << endl;
    cout << "Nhiệt độ thấp (độ F): " << thang.nhietDoThap << endl;
    cout << "Nhiệt độ trung bình (độ F): " << thang.nhietDoTrungBinh << endl;
}

void tinhToanThongKe(const ThoiTiet thang[], double& tongLuongMuaNam, double& nhietDoCaoNhat, double& nhietDoThapNhat, double& nhietDoTrungBinhNam)
{
    tongLuongMuaNam = 0;
    nhietDoCaoNhat = thang[0].nhietDoCao;
    nhietDoThapNhat = thang[0].nhietDoThap;
    nhietDoTrungBinhNam = 0;

    for (int i = 0; i < SO_THANG_TRONG_NAM; i++)
    {
        tongLuongMuaNam += thang[i].tongLuongMua;

        if (thang[i].nhietDoCao > nhietDoCaoNhat)
        {
            nhietDoCaoNhat = thang[i].nhietDoCao;
        }

        if (thang[i].nhietDoThap < nhietDoThapNhat)
        {
            nhietDoThapNhat = thang[i].nhietDoThap;
        }

        nhietDoTrungBinhNam += thang[i].nhietDoTrungBinh;
    }

    nhietDoTrungBinhNam /= SO_THANG_TRONG_NAM;
}

int main()
{
    ThoiTiet thang[SO_THANG_TRONG_NAM];

    for (int i = 0; i < SO_THANG_TRONG_NAM; i++)
    {
        nhapDuLieuThoiTiet(thang[i]);
        cout << endl;
    }

    double tongLuongMuaNam, nhietDoCaoNhat, nhietDoThapNhat, nhietDoTrungBinhNam;
    tinhToanThongKe(thang, tongLuongMuaNam, nhietDoCaoNhat, nhietDoThapNhat, nhietDoTrungBinhNam);

    cout << "Thống kê dữ liệu thời tiết trong năm:" << endl;
    cout << "Tổng lượng mưa trong năm (inch): " << tongLuongMuaNam << endl;
    cout << "Nhiệt độ cao nhất trong năm (độ F): " << nhietDoCaoNhat << endl;
    cout << "Nhiệt độ thấp nhất trong năm (độ F): " << nhietDoThapNhat << endl;
    cout << "Nhiệt độ trung bình hàng tháng (độ F): " << nhietDoTrungBinhNam << endl;

    return 0;
}