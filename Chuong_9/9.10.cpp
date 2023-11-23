#include <iostream>
using namespace std;

int main()
{
    int set[8] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    int* nums = set; // Con trỏ nums trỏ đến mảng set

    // Hiển thị các số trong mảng
    cout << "Các số trong mảng set là:\n";
    cout << *nums << " "; // Hiển thị phần tử đầu tiên
    while (nums < &set[7])
    {
        nums++; // Di chuyển nums để trỏ đến phần tử kế tiếp
        cout << *nums << " "; // Hiển thị giá trị mà nums trỏ đến
    }

    // Hiển thị các số theo thứ tự ngược lại
    cout << "\nCác số trong mảng set theo thứ tự ngược lại là:\n";
    cout << *nums << " "; // Hiển thị phần tử đầu tiên
    while (nums > set)
    {
        nums--; // Di chuyển ngược lại phần tử trước đó
        cout << *nums << " "; // Hiển thị giá trị mà nums trỏ đến
    }

    return 0;
}