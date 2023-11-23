#include <iostream>
#include <iomanip>

using namespace std;

struct PayInfo
{
    int hours;          // Số giờ làm việc
    double payRate;     // Mức lương theo giờ
};

int main()
{
    const int NUM_WORKERS = 3;         // Số lượng nhân viên
    PayInfo workers[NUM_WORKERS];      // Mảng các cấu trúc
    int index;                         // Biến đếm vòng lặp

    // Nhập dữ liệu lương của nhân viên
    cout << "Nhập số giờ làm việc và mức lương theo giờ của " << NUM_WORKERS << " nhân viên.\n";

    for (index = 0; index < NUM_WORKERS; index++)
    {
        // Nhập số giờ làm việc của nhân viên
        cout << "Số giờ làm việc của nhân viên #" << (index + 1);
        cout << ": ";
        cin >> workers[index].hours;

        // Nhập mức lương theo giờ của nhân viên
        cout << "Mức lương theo giờ cho nhân viên #";
        cout << (index + 1) << ": ";
        cin >> workers[index].payRate;
        cout << endl;
    }

    // Hiển thị tổng thu nhập của từng nhân viên
    cout << "Dưới đây là tổng thu nhập của từng nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_WORKERS; index++)
    {
        double gross;
        gross = workers[index].hours * workers[index].payRate;
        cout << "Nhân viên #" << (index + 1);
        cout << ": $" << gross << endl;
    }

    return 0;
}