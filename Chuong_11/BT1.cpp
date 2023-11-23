#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string tieuDe;
    string giamDoc;
    int namPhatHanh;
    int thoiGianChay;
};

void hienThiThongTinPhim(const MovieData& movie)
{
    cout << "Thông tin về bộ phim:\n";
    cout << "Tiêu đề: " << movie.tieuDe << endl;
    cout << "Giám đốc: " << movie.giamDoc << endl;
    cout << "Năm phát hành: " << movie.namPhatHanh << endl;
    cout << "Thời gian chạy: " << movie.thoiGianChay << " phút" << endl;
}

int main()
{
    MovieData movie1;
    movie1.tieuDe = "Phim A";
    movie1.giamDoc = "Đạo diễn A";
    movie1.namPhatHanh = 2021;
    movie1.thoiGianChay = 120;

    MovieData movie2;
    movie2.tieuDe = "Phim B";
    movie2.giamDoc = "Đạo diễn B";
    movie2.namPhatHanh = 2022;
    movie2.thoiGianChay = 105;

    hienThiThongTinPhim(movie1);
    cout << endl;
    hienThiThongTinPhim(movie2);

    return 0;
}