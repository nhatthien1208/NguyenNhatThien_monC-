#include <iostream>
using namespace std;

int main()
{
    int x = 25, y = 50, z = 75; // Ba biến kiểu int
    int* ptr = nullptr; // Con trỏ

    // Hiển thị nội dung của x, y và z
    cout << "Đây là giá trị của x, y và z:\n";
    cout << x << " " << y << " " << z << endl;

    // Sử dụng con trỏ để thay đổi giá trị của x, y và z

    ptr = &x; // Lưu địa chỉ của x vào con trỏ ptr
    *ptr += 100; // Thêm 100 vào giá trị của x

    ptr = &y; // Lưu địa chỉ của y vào con trỏ ptr
    *ptr += 100; // Thêm 100 vào giá trị của y

    ptr = &z; // Lưu địa chỉ của z vào con trỏ ptr
    *ptr += 100; // Thêm 100 vào giá trị của z

    // Hiển thị lại nội dung của x, y và z
    cout << "Đây là giá trị của x, y và z sau khi thay đổi:\n";
    cout << x << " " << y << " " << z << endl;

    return 0;
}