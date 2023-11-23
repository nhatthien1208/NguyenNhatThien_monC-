#include <iostream>
#include <cmath> // Để sử dụng hàm pow
#include <iomanip>

using namespace std;

// Hằng số pi
const double PI = 3.14159;

// Khai báo cấu trúc (structure)
struct Circle
{
    double radius;    // Bán kính của hình tròn
    double diameter;  // Đường kính của hình tròn
    double area;      // Diện tích của hình tròn
};

int main()
{
    Circle c;  // Định nghĩa một biến cấu trúc

    // Nhập đường kính của hình tròn
    cout << "Nhập đường kính của hình tròn: ";
    cin >> c.diameter;

    // Tính bán kính của hình tròn
    c.radius = c.diameter / 2;

    // Tính diện tích của hình tròn
    c.area = PI * pow(c.radius, 2.0);

    // Hiển thị dữ liệu của hình tròn
    cout << fixed << showpoint << setprecision(2);
    cout << "Bán kính và diện tích của hình tròn là:\n";
    cout << "Bán kính: " << c.radius << endl;
    cout << "Diện tích: " << c.area << endl;

    return 0;
}