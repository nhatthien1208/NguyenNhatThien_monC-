#include <iostream>
#include <iomanip>
using namespace std;

// Khai báo nguyên mẫu hàm
void getSales(double*, int);
double totalSales(double*, int);

int main()
{
    const int QTRS = 4;
    double sales[QTRS];

    // Nhập dữ liệu doanh số cho từng quý
    getSales(sales, QTRS);

    // Đặt định dạng hiển thị số
    cout << fixed << showpoint << setprecision(2);

    // Hiển thị tổng doanh số trong năm
    cout << "Tổng doanh số trong năm là $";
    cout << totalSales(sales, QTRS) << endl;
    return 0;
}

// Định nghĩa hàm getSales. Hàm này sử dụng con trỏ để chấp nhận địa chỉ của một mảng số thực.
// Hàm yêu cầu người dùng nhập vào các con số doanh số và lưu chúng vào mảng.
void getSales(double* arr, int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << "Nhập vào con số doanh số cho quý ";
        cout << (count + 1) << ": ";
        cin >> arr[count];
    }
}

// Định nghĩa hàm totalSales. Hàm này sử dụng con trỏ để chấp nhận địa chỉ của một mảng.
// Hàm trả về tổng của các phần tử trong mảng.
double totalSales(double* arr, int size)
{
    double sum = 0.0;

    for (int count = 0; count < size; count++)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}