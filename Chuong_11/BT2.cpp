#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string tieuDe;
    string giamDoc;
    int namPhatHanh;
    int thoiGianChay;
    double chiPhiSanXuat;
    double doanhThuNamDau;
};

void hienThiThongTinPhim(const MovieData& movie)
{
    cout << "Thông tin về bộ phim:\n";
    cout << "Tiêu đề: " << movie.tieuDe << endl;
    cout << "Giám đốc: " << movie.giamDoc << endl;
    cout << "Năm phát hành: " << movie.namPhatHanh << endl;
    cout << "Thời gian chạy: " << movie.thoiGianChay << " phút" << endl;
    cout << "Chi phí sản xuất: $" << movie.chiPhiSanXuat << endl;
    cout << "Doanh thu năm đầu tiên: $" << movie.doanhThuNamDau << endl;

    double loiLo = movie.doanhThuNamDau - movie.chiPhiSanXuat;
    if (loiLo > 0)
    {
        cout << "Lãi năm đầu tiên: $" << loiLo << endl;
    }
    else if (loiLo < 0)
    {
        cout << "Lỗ năm đầu tiên: $" << -loiLo << endl;
    }
    else
    {
        cout << "Không có lãi/lỗ năm đầu tiên" << endl;
    }
}

int main()
{
    MovieData movie1;
    movie1.tieuDe = "Phim A";
    movie1.giamDoc = "Đạo diễn A";
    movie1.namPhatHanh = 2021;
    movie1.thoiGianChay = 120;
    movie1.chiPhiSanXuat = 1000000;
    movie1.doanhThuNamDau = 1500000;

    MovieData movie2;
    movie2.tieuDe = "Phim B";
    movie2.giamDoc = "Đạo diễn B";
    movie2.namPhatHanh = 2022;
    movie2.thoiGianChay = 105;
    movie2.chiPhiSanXuat = 800000;
    movie2.doanhThuNamDau = 700000;

    hienThiThongTinPhim(movie1);
    cout << endl;
    hienThiThongTinPhim(movie2);

    return 0;
}