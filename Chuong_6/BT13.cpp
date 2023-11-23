#include <iostream>

int getNumEmployees()
{
    int numEmployees;
    do {
        std::cout << "Nhập số lượng nhân viên trong công ty: ";
        std::cin >> numEmployees;

        if (numEmployees < 1) {
            std::cout << "Số lượng nhân viên không hợp lệ. Vui lòng nhập lại!" << std::endl;
        }
    } while (numEmployees < 1);

    return numEmployees;
}

int getAbsentDays(int numEmployees)
{
    int totalAbsentDays = 0;

    for (int i = 0; i < numEmployees; i++) {
        int absentDays;
        do {
            std::cout << "Nhập số ngày nghỉ của nhân viên " << i + 1 << ": ";
            std::cin >> absentDays;

            if (absentDays < 0) {
                std::cout << "Số ngày nghỉ không hợp lệ. Vui lòng nhập lại!" << std::endl;
            }
        } while (absentDays < 0);

        totalAbsentDays += absentDays;
    }

    return totalAbsentDays;
}

int calculateAverageAbsentDays(int numEmployees, int totalAbsentDays)
{
    return (totalAbsentDays * 2) / numEmployees;
}

int main()
{
    int numEmployees = getNumEmployees();
    int totalAbsentDays = getAbsentDays(numEmployees);
    int averageAbsentDays = calculateAverageAbsentDays(numEmployees, totalAbsentDays);

    std::cout << "Số ngày nghỉ trung bình của nhân viên: " << averageAbsentDays << std::endl;

    return 0;
}