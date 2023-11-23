#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct PayRoll
{
    int empNumber;     // Số nhân viên
    string name;       // Tên nhân viên
    double hours;      // Số giờ làm việc
    double payRate;    // Mức lương theo giờ
    double grossPay;   // Tổng thu nhập
};

int main()
{
    PayRoll employee;   // employee là một cấu trúc PayRoll.

    // Nhập số nhân viên.
    cout << "Nhập số nhân viên: ";
    cin >> employee.empNumber;

    cin.ignore();      // Bỏ qua kí tự '\n' còn lại.

    // Nhập tên nhân viên.
    cout << "Nhập tên nhân viên: ";
    getline(cin, employee.name);

    // Nhập số giờ làm việc của nhân viên.
    cout << "Nhập số giờ làm việc: ";
    cin >> employee.hours;

    // Nhập mức lương theo giờ của nhân viên.
    cout << "Nhập mức lương theo giờ của nhân viên: ";
    cin >> employee.payRate;

    // Tính tổng thu nhập của nhân viên.
    employee.grossPay = employee.hours * employee.payRate;

    // Hiển thị dữ liệu của nhân viên.
    cout << "Dưới đây là dữ liệu tính lương của nhân viên:\n";
    cout << "Tên: " << employee.name << endl;
    cout << "Số nhân viên: " << employee.empNumber << endl;
    cout << "Số giờ làm việc: " << employee.hours << endl;
    cout << "Mức lương theo giờ: " << employee.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng thu nhập: $" << employee.grossPay << endl;

    return 0;
}