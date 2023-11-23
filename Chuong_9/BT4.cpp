#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
};


void sortStudents(Student* students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = i + 1; j < numStudents; j++) {
            if (students[j].score < students[i].score) {
               
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int numStudents;

    std::cout << "Nhập số học sinh: ";
    std::cin >> numStudents;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        std::cout << "Nhập tên học sinh thứ " << i + 1 << ": ";
        std::cin >> students[i].name;

        std::cout << "Nhập điểm kiểm tra của học sinh thứ " << i + 1 << ": ";
        std::cin >> students[i].score;
    }

    sortStudents(students, numStudents);

    std::cout << "Danh sách học sinh và điểm kiểm tra đã sắp xếp: " << std::endl;
    for (int i = 0; i < numStudents; i++) {
        std::cout << students[i].name << ": " << students[i].score << std::endl;
    }

    delete[] students;

    return 0;
}