#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = { 0.05, 0.1, 0.25, 0.5, 1.0 };
    double* doublePtr; // Con trỏ kiểu double
    int count; // Chỉ mục của mảng

    // Gán địa chỉ của mảng coins cho con trỏ doublePtr
    doublePtr = coins;

    // Hiển thị nội dung của mảng coins bằng cách sử dụng chỉ mục với con trỏ
    cout << "Đây là giá trị trong mảng coins:\n";
    for (count = 0; count < NUM_COINS; count++)
        cout << doublePtr[count] << " ";

    // Hiển thị lại nội dung của mảng, nhưng lần này sử dụng ký hiệu con trỏ với tên mảng
    cout << "\nVà đây là lần hiển thị khác:\n";
    for (count = 0; count < NUM_COINS; count++)
        cout << *(coins + count) << " ";
    cout << endl;

    return 0;
}