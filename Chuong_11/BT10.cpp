#include <iostream>
#include <iomanip>
using namespace std;

struct NganSachHangThang
{
    double nhaO;
    double tienIch;
    double chiTieuGiaDinh;
    double vanChuyen;
    double doAn;
    double yTe;
    double baoHiem;
    double giaiTri;
    double quanAo;
    double khac;
};

void nhapNganSach(NganSachHangThang& nganSach)
{
    cout << "Nhập số tiền chi tiêu cho từng hạng mục ngân sách hàng tháng:" << endl;
    cout << "Nhà ở: ";
    cin >> nganSach.nhaO;
    cout << "Tiện ích: ";
    cin >> nganSach.tienIch;
    cout << "Chi tiêu gia đình: ";
    cin >> nganSach.chiTieuGiaDinh;
    cout << "Vận chuyển: ";
    cin >> nganSach.vanChuyen;
    cout << "Đồ ăn: ";
    cin >> nganSach.doAn;
    cout << "Y tế: ";
    cin >> nganSach.yTe;
    cout << "Bảo hiểm: ";
    cin >> nganSach.baoHiem;
    cout << "Giải trí: ";
    cin >> nganSach.giaiTri;
    cout << "Quần áo: ";
    cin >> nganSach.quanAo;
    cout << "Khác: ";
    cin >> nganSach.khac;
}

void hienThiBaoCao(const NganSachHangThang& nganSach)
{
    double tongChiTieu = nganSach.nhaO + nganSach.tienIch + nganSach.chiTieuGiaDinh + nganSach.vanChuyen +
        nganSach.doAn + nganSach.yTe + nganSach.baoHiem + nganSach.giaiTri + nganSach.quanAo + nganSach.khac;

    cout << "----- Báo cáo ngân sách hàng tháng -----" << endl;
    cout << fixed << setprecision(2);

    cout << "Nhà ở: " << (nganSach.nhaO >= 500.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Tiện ích: " << (nganSach.tienIch >= 150.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Chi tiêu gia đình: " << (nganSach.chiTieuGiaDinh >= 65.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Vận chuyển: " << (nganSach.vanChuyen >= 50.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Đồ ăn: " << (nganSach.doAn >= 250.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Y tế: " << (nganSach.yTe >= 30.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Bảo hiểm: " << (nganSach.baoHiem >= 100.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Giải trí: " << (nganSach.giaiTri >= 150.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Quần áo: " << (nganSach.quanAo >= 75.00 ? "Trên" : "Dưới") << " ngân sách" << endl;
    cout << "Khác: " << (nganSach.khac >= 50.00 ? "Trên" : "Dưới") << " ngân sách" << endl;

    cout << "----------------------------------------" << endl;
    cout << "Tổng chi tiêu hàng tháng: " << tong```cpp
#include <iostream>
#include <iomanip>
        using namespace std;

    struct NganSachHangThang
    {
        double nhaO;
        double tienIch;
        double chiTieuGiaDinh;
        double vanChuyen;
        double doAn;
        double yTe;
        double baoHiem;
        double giaiTri;
        double quanAo;
        double khac;
    };

    void nhapNganSach(NganSachHangThang & nganSach)
    {
        cout << "Nhap so tien chi tieu cho tung hang muc ngan sach hang thang:" << endl;
        cout << "Nha o: ";
        cin >> nganSach.nhaO;
        cout << "Tien ich: ";
        cin >> nganSach.tienIch;
        cout << "Chi tieu gia dinh: ";
        cin >> nganSach.chiTieuGiaDinh;
        cout << "Van chuyen: ";
        cin >> nganSach.vanChuyen;
        cout << "Do an: ";
        cin >> nganSach.doAn;
        cout << "Y te: ";
        cin >> nganSach.yTe;
        cout << "Bao hiem: ";
        cin >> nganSach.baoHiem;
        cout << "Giai tri: ";
        cin >> nganSach.giaiTri;
        cout << "Quan ao: ";
        cin >> nganSach.quanAo;
        cout << "Khac: ";
        cin >> nganSach.khac;
    }

    void hienThiBaoCao(const NganSachHangThang & nganSach)
    {
        double tongChiTieu = nganSach.nhaO + nganSach.tienIch + nganSach.chiTieuGiaDinh + nganSach.vanChuyen +
            nganSach.doAn + nganSach.yTe + nganSach.baoHiem + nganSach.giaiTri + nganSach.quanAo + nganSach.khac;

        cout << "----- Bao cao ngan sach hang thang -----" << endl;
        cout << fixed << setprecision(2);

        cout << "Nha o: " << (nganSach.nhaO >= 500.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Tien ich: " << (nganSach.tienIch >= 150.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Chi tieu gia dinh: " << (nganSach.chiTieuGiaDinh >= 65.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Van chuyen: " << (nganSach.vanChuyen >= 50.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Do an: " << (nganSach.doAn >= 250.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Y te: " << (nganSach.yTe >= 30.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Bao hiem: " << (nganSach.baoHiem >= 100.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Giai tri: " << (nganSach.giaiTri >= 150.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Quan ao: " << (nganSach.quanAo >= 75.00 ? "Tren" : "Duoi") << " ngan sach" << endl;
        cout << "Khac: " << (nganSach.khac >= 50.00 ? "Tren" : "Duoi") << " ngan sach" << endl;

        cout << "----------------------------------------" << endl;
        cout << "Tong chi tieu hang thang: " << tongChiTieu << endl;
    }

    int main()
    {
        NganSachHangThang nganSach;

        nhapNganSach(nganSach);
        hienThiBaoCao(nganSach);

        return 0;
    }