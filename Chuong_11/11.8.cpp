#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Student
{
    string name;
    int idNum;
    int creditHours;
    double gpa;
};

void getData(Student*);
void displayData(const Student&);

int main()
{
    Student freshman;

    cout << "Enter the following student data:\n";
    getData(&freshman);
    cout << "\nHere is the student data you entered:\n";
    displayData(freshman);

    return 0;
}

void getData(Student* s)
{
    cout << "Student name: ";
    cin.ignore();
    getline(cin, s->name);

    cout << "Student ID Number: ";
    cin >> s->idNum;

    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;

    cout << "Current GPA: ";
    cin >> s->gpa;
}

void displayData(const Student& s)
{
    cout << setprecision(3);
    cout << "Name: " << s.name << endl;
    cout << "ID Number: " << s.idNum << endl;
    cout << "Credit Hours: " << s.creditHours << endl;
    cout << "GPA: " << s.gpa << endl;
}