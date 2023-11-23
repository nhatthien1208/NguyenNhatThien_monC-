#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int set[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    int* numPtr = nullptr; // Con trỏ
    int count; // Biến đếm cho vòng lặp

    // Gán con trỏ numPtr trỏ đến mảng set
    numPtr = set;

    // Sử dụng con trỏ để hiển thị nội dung của mảng
    cout << "Các số trong mảng set là:\n";
    for (count = 0; count < SIZE; count++)
    {
        cout << *numPtr << " ";
        numPtr++;
    }

    // Hiển thị nội dung của mảng theo thứ tự ngược lại
    cout << "\nCác số trong mảng set theo thứ tự ngược lại là:\n";
    for (count = 0; count < SIZE; count++)
    {
        numPtr--;
        cout << *numPtr << " ";
    }

    return 0;
}