#include <iostream>
using namespace std;

int main()
{
    int x = 25; // biến kiểu int
    int* ptr = nullptr; // Con trỏ, có thể trỏ tới một biến kiểu int

    ptr = &x; // Lưu địa chỉ của x vào ptr

    // Sử dụng cả x và ptr để hiển thị giá trị trong x
    cout << "Giá trị trong x hiện tại:\n";
    cout << x << endl; // Hiển thị nội dung của x
    cout << *ptr << endl; // Hiển thị nội dung của x

    // Gán giá trị 100 vào vị trí mà ptr đang trỏ tới. Điều này
    // sẽ thực sự gán giá trị 100 vào x.
    *ptr = 100;

    // Sử dụng cả x và ptr để hiển thị giá trị trong x
    cout << "Giá trị trong x sau khi thay đổi:\n";
    cout << x << endl; // Hiển thị nội dung của x
    cout << *ptr << endl; // Hiển thị nội dung của x

    return 0;
}