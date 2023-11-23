#include <iostream>
#include <string>

struct Student {
    std::string name;
    int idNum;
    float* testScores;
    float average;
    char grade;
};

void calculateAverage(Student& student, int numTests) {
    float sum = 0.0;
    for (int i = 0; i < numTests; i++) {
        sum += student.testScores[i];
    }
    student.average = sum / numTests;
}

void calculateGrade(Student& student) {
    if (student.average >= 91 && student.average <= 100) {
        student.grade = 'A';
    }
    else if (student.average >= 81 && student.average <= 90) {
        student.grade = 'B';
    }
    else if (student.average >= 71 && student.average <= 80) {
        student.grade = 'C';
    }
    else if (student.average >= 61 && student.average <= 70) {
        student.grade = 'D';
    }
    else {
        student.grade = 'F';
    }
}

int main() {
    int numStudents, numTests;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    std::cout << "Enter the number of tests: ";
    std::cin >> numTests;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        std::cout << "\nEnter details for student " << (i + 1) << ":\n";
        std::cout << "Name: ";
        std::cin.ignore();
        std::getline(std::cin, students[i].name);
        std::cout << "ID Number: ";
        std::cin >> students[i].idNum;

        students[i].testScores = new float[numTests];
        for (int j = 0; j < numTests; j++) {
            std::cout << "Test score " << (j + 1) << ": ";
            std::cin >> students[i].testScores[j];
            while (students[i].testScores[j] < 0) {
                std::cout << "Invalid score. Please enter a positive value: ";
                std::cin >> students[i].testScores[j];
            }
        }

        calculateAverage(students[i], numTests);
        calculateGrade(students[i]);
    }

    std::cout << "\n\nStudent Grade Report:\n";
    std::cout << "---------------------------------\n";
    std::cout << "Name\t\tID\tAverage\tGrade\n";
    std::cout << "---------------------------------\n";

    for (int i = 0; i < numStudents; i++) {
        std::cout << students[i].name << "\t" << students[i].idNum << "\t";
        std::cout << students[i].average << "\t" << students[i].grade << std::endl;
    }

    delete[] students;
    return 0;
}