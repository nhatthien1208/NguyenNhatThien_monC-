#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;

public:
    Employee(const std::string& empName, int empId, const std::string& empDept, const std::string& empPos)
        : name(empName), idNumber(empId), department(empDept), position(empPos) {}

    Employee(const std::string& empName, int empId)
        : name(empName), idNumber(empId), department(""), position("") {}

    Employee()
        : name(""), idNumber(0), department(""), position("") {}

    void setName(const std::string& empName) {
        name = empName;
    }

    void setIdNumber(int empId) {
        idNumber = empId;
    }

    void setDepartment(const std::string& empDept) {
        department = empDept;
    }

    void setPosition(const std::string& empPos) {
        position = empPos;
    }

    std::string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    std::string getDepartment() const {
        return department;
    }

    std::string getPosition() const {
        return position;
    }
};

int main() {
    
    Employee employee1("Susan Meyers", 47899, "Phó chủ tịch kế toán", "Phó chủ tịch");
    Employee employee2("Mark Jones", 39119, "Lập trình viên CNTT", "Lập trình viên");
    Employee employee3("Joy Rogers", 81774, "Kỹ sư sản xuất", "Kỹ sư");

  
    std::cout << "Thông tin nhân viên 1:" << std::endl;
    std::cout << "Họ tên: " << employee1.getName() << std::endl;
    std::cout << "Mã số CMND: " << employee1.getIdNumber() << std::endl;
    std::cout << "Bộ phận: " << employee1.getDepartment() << std::endl;
    std::cout << "Chức vụ: " << employee1.getPosition() << std::endl;

    std::cout << std::endl;

    std::cout << "Thông tin nhân viên 2:" << std::endl;
    std::cout << "Họ tên: " << employee2.getName() << std::endl;
    std::cout << "Mã số CMND: " << employee2.getIdNumber() << std::endl;
    std::cout << "Bộ phận: " << employee2.getDepartment() << std::endl;
    std::cout << "Chức vụ: " << employee2.getPosition() << std::endl;

    std::cout << std::endl;

    std::cout << "Thông tin nhân viên 3:" << std::endl;
    std::cout << "Họ tên: " << employee3.getName() << std::endl;
    std::cout << "Mã số CMND: " << employee3.getIdNumber() << std::endl;
    std::cout << "Bộ phận: " << employee3.getDepartment() << std::endl;
    std::cout << "Chức vụ: " << employee3.getPosition() << std::endl;

    return 0;
}