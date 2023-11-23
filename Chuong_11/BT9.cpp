#include <iostream>
#include <string>
using namespace std;

const int SO_NGUOI_NOI_TOI_DA = 10;

struct NguoiNoi
{
    string ten;
    string soDienThoai;
    string chuDe;
    double phi;
};

void nhapThongTinNguoiNoi(NguoiNoi& nguoiNoi)
{
    cin.ignore();

    cout << "Nhập thông tin về người nói:" << endl;
    cout << "Tên: ";
    getline(cin, nguoiNoi.ten);
    cout << "Số điện thoại: ";
    getline(cin, nguoiNoi.soDienThoai);
    cout << "Chủ đề nói: ";
    getline(cin, nguoiNoi.chuDe);
    cout << "Phí bắt buộc: ";
    cin >> nguoiNoi.phi;

    while (nguoiNoi.phi < 0)
    {
        cout << "Phí không hợp lệ. Vui lòng nhập lại." << endl;
        cout << "Phí bắt buộc: ";
        cin >> nguoiNoi.phi;
    }

    cin.ignore();
}

void hienThiThongTinNguoiNoi(const NguoiNoi& nguoiNoi)
{
    cout << "Tên: " << nguoiNoi.ten << endl;
    cout << "Số điện thoại: " << nguoiNoi.soDienThoai << endl;
    cout << "Chủ đề nói: " << nguoiNoi.chuDe << endl;
    cout << "Phí bắt buộc: " << nguoiNoi.phi << endl;
}

void hienThiDanhSachNguoiNoi(const NguoiNoi danhSach[], int soNguoiNoi)
{
    cout << "Danh sách người nói trong văn phòng diễn giả:" << endl;

    for (int i = 0; i < soNguoiNoi; i++)
    {
        cout << "Người nói thứ " << i + 1 << ":" << endl;
        hienThiThongTinNguoiNoi(danhSach[i]);
        cout << endl;
    }
}

void themNguoiNoi(NguoiNoi danhSach[], int& soNguoiNoi)
{
    if (soNguoiNoi >= SO_NGUOI_NOI_TOI_DA)
    {
        cout << "Danh sách người nói đã đạt đến giới hạn. Không thể thêm người nữa." << endl;
        return;
    }

    NguoiNoi nguoiNoiMoi;
    nhapThongTinNguoiNoi(nguoiNoiMoi);

    danhSach[soNguoiNoi] = nguoiNoiMoi;
    soNguoiNoi++;

    cout << "Người nói đã được thêm vào danh sách." << endl;
}

void suaThongTinNguoiNoi(NguoiNoi danhSach[], int soNguoiNoi)
{
    int viTri;

    cout << "Nhập số thứ tự của người nói bạn muốn sửa thông tin: ";
    cin >> viTri;

    if (viTri < 1 || viTri > soNguoiNoi)
    {
        cout << "Số thứ tự không hợp lệ." << endl;
        return;
    }

    cout << "Thông tin hiện tại của người nói thứ " << viTri << ":" << endl;
    hienThiThongTinNguoiNoi(danhSach[viTri - 1]);
    cout << endl;

    nhapThongTinNguoiNoi(danhSach[viTri - 1]);
}

void timKiemNguoiNoi(const NguoiNoi danhSach[], int soNguoiNoi, const string& chuDeTimKiem)
{
    bool timThay = false;

    cout << "Kết quả tìm kiếm cho chủ đề \"" << chuDeTimKiem << "\" là:

        for (int i = 0; i < soNguoiNoi; i++)
        {
            if (danhSach[i].chuDe == chuDeTimKiem)
            {
                hienThiThongTinNguoiNoi(danhSach[i]);
                cout << endl;
                timThay = true;
            }
        }

    if (!timThay)
    {
        cout << "Không tìm thấy người nói nào với chủ đề \"" << chuDeTimKiem << "\"." << endl;
    }
}

int main()
{
    NguoiNoi danhSachNguoiNoi[SO_NGUOI_NOI_TOI_DA];
    int soNguoiNoi = 0;

    int luaChon;
    string chuDeTimKiem;

    do
    {
        cout << "----- Menu -----" << endl;
        cout << "1. Hiển thị danh sách người nói" << endl;
        cout << "2. Thêm người nói" << endl;
        cout << "3. Sửa thông tin người nói" << endl;
        cout << "4. Tìm kiếm người nói theo chủ đề" << endl;
        cout << "0. Thoát chương trình" << endl;
        cout << "----------------" << endl;
        cout << "Nhập lựa chọn của bạn: ";
        cin >> luaChon;

        switch (luaChon)
        {
        case 1:
            hienThiDanhSachNguoiNoi(danhSachNguoiNoi, soNguoiNoi);
            break;
        case 2:
            themNguoiNoi(danhSachNguoiNoi, soNguoiNoi);
            break;
        case 3:
            suaThongTinNguoiNoi(danhSachNguoiNoi, soNguoiNoi);
            break;
        case 4:
            cin.ignore();
            cout << "Nhập chủ đề bạn muốn tìm kiếm: ";
            getline(cin, chuDeTimKiem);
            timKiemNguoiNoi(danhSachNguoiNoi, soNguoiNoi, chuDeTimKiem);
            break;
        case 0:
            cout << "Cảm ơn bạn đã sử dụng chương trình!" << endl;
            break;
        default:
            cout << "Lựa chọn không hợp lệ. Vui lòng thử lại." << endl;
            break;
        }

        cout << endl;
    } while (luaChon != 0);

    return 0;
}