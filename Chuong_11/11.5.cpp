#include <iostream>
#include <string>

using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

struct Place
{
    string address;
    string city;
    string state;
    string zip;
};

struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date birthDate;
    Place residence;
};

int main()
{
    EmployeeInfo manager;

    // Nhập thông tin về người quản lý
    cout << "Nhập tên người quản lý: ";
    getline(cin, manager.name);
    cout << "Nhập số nhân viên của người quản lý: ";
    cin >> manager.employeeNumber;

    // Nhập ngày sinh của người quản lý
    cout << "Nhập ngày sinh của người quản lý.\n";
    cout << "Tháng (tối đa 2 chữ số): ";
    cin >> manager.birthDate.month;
    cout << "Ngày (tối đa 2 chữ số): ";
    cin >> manager.birthDate.day;
    cout << "Năm: ";
    cin >> manager.birthDate.year;
    cin.ignore(); // Bỏ qua ký tự newline còn lại

    // Nhập thông tin địa chỉ cư trú của người quản lý
    cout << "Nhập địa chỉ đường của người quản lý: ";
    getline(cin, manager.residence.address);
    cout << "Thành phố: ";
    getline(cin, manager.residence.city);
    cout << "Tiểu bang: ";
    getline(cin, manager.residence.state);
    cout << "Mã ZIP: ";
    getline(cin, manager.residence.zip);

    // Hiển thị thông tin vừa nhập
    cout << "\nDưới đây là thông tin của người quản lý:\n";
    cout << manager.name << endl;
    cout << "Số nhân viên " << manager.employeeNumber << endl;
    cout << "Ngày sinh: ";
    cout << manager.birthDate.month << "-";
    cout << manager.birthDate.day << "-";
    cout << manager.birthDate.year << endl;
    cout << "Địa chỉ cư trú:\n";
    cout << manager.residence.address << endl;
    cout << manager.residence.city << ", ";
    cout << manager.residence.state << " ";
    cout << manager.residence.zip << endl;

    return 0;
}