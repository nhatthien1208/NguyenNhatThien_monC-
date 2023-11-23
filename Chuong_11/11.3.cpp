#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct EmployeePay
{
    string name;        // Tên nhân viên
    int empNum;         // Số nhân viên
    double payRate;     // Mức lương theo giờ
    double hours;       // Số giờ làm việc
    double grossPay;    // Tổng thu nhập
};

int main()
{
    EmployeePay employee1 = { "Betty Ross", 141, 18.75 };
    EmployeePay employee2 = { "Jill Sandburg", 142, 17.50 };

    cout << fixed << showpoint << setprecision(2);

    // Tính lương cho employee1
    cout << "Tên: " << employee1.name << endl;
    cout << "Số nhân viên: " << employee1.empNum << endl;
    cout << "Nhập số giờ làm việc của nhân viên này: ";
    cin >> employee1.hours;
    employee1.grossPay = employee1.hours * employee1.payRate;
    cout << "Tổng thu nhập: " << employee1.grossPay << endl << endl;

    // Tính lương cho employee2
    cout << "Tên: " << employee2.name << endl;
    cout << "Số nhân viên: " << employee2.empNum << endl;
    cout << "Nhập số giờ làm việc của nhân viên này: ";
    cin >> employee2.hours;
    employee2.grossPay = employee2.hours * employee2.payRate;
    cout << "Tổng thu nhập: " << employee2.grossPay << endl;

    return 0;
}