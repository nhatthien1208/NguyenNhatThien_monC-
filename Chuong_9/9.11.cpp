#include <iostream>
using namespace std;

// Khai báo nguyên mẫu hàm
void getNumber(int*);
void doubleValue(int*);

int main()
{
    int number;

    // Gọi hàm getNumber và truyền địa chỉ của biến number
    getNumber(&number);

    // Gọi hàm doubleValue và truyền địa chỉ của biến number
    doubleValue(&number);

    // Hiển thị giá trị trong biến number
    cout << "Giá trị sau khi nhân đôi là " << number << endl;
    return 0;
}

// Định nghĩa hàm getNumber. Tham số input là con trỏ.
// Hàm này yêu cầu người dùng nhập vào một số nguyên.
// Giá trị nhập vào được lưu vào biến được trỏ tới bởi input.
void getNumber(int* input)
{
    cout << "Nhập vào một số nguyên: ";
    cin >> *input;
}

// Định nghĩa hàm doubleValue. Tham số val là con trỏ.
// Hàm này nhân đôi giá trị của biến được trỏ tới bởi val.
void doubleValue(int* val)
{
    *val *= 2;
}