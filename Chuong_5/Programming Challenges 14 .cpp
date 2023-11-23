#include <iostream>
#include <string>

int main() {
    const int MAX_STUDENTS = 25;
    std::string studentNames[MAX_STUDENTS];
    int numStudents;

    std::cout << "Nhập số lượng học sinh trong lớp (tối đa 25): ";
    std::cin >> numStudents;

    while (numStudents < 1 || numStudents > MAX_STUDENTS) {
        std::cout << "Số lượng học sinh không hợp lệ. Vui lòng nhập lại (tối đa 25): ";
        std::cin >> numStudents;
    }

    std::cout << "Nhập tên của từng học sinh:\n";
    for (int i = 0; i < numStudents; i++) {
        std::cout << "Học sinh " << i + 1 << ": ";
        std::cin >> studentNames[i];
    }

    // Xác định học sinh đứng đầu và đứng cuối
    std::string frontStudent = studentNames[0];
    std::string endStudent = studentNames[0];

    for (int i = 1; i < numStudents; i++) {
        if (studentNames[i] < frontStudent) {
            frontStudent = studentNames[i];
        }
        if (studentNames[i] > endStudent) {
            endStudent = studentNames[i];
        }
    }

    std::cout << "Học sinh đứng đầu hàng: " << frontStudent << std::endl;
    std::cout << "Học sinh đứng cuối hàng: " << endStudent << std::endl;

    return 0;
}