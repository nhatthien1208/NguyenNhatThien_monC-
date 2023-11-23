#include <iostream>
#include <string>

struct Athlete {
    std::string name;
    double time;
};

void validateTime(double time) {
    if (time <= 0) {
        std::cout << "Thời gian phải là số dương." << std::endl;
        exit(0);
    }
}

void sortAthletes(Athlete athletes[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (athletes[j].time < athletes[i].time) {
                Athlete temp = athletes[i];
                athletes[i] = athletes[j];
                athletes[j] = temp;
            }
        }
    }
}

int main() {
    const int numAthletes = 3;
    Athlete athletes[numAthletes];

    for (int i = 0; i < numAthletes; i++) {
        std::cout << "Nhập tên vận động viên thứ " << i + 1 << ": ";
        std::cin >> athletes[i].name;

        std::cout << "Nhập thời gian hoàn thành (s) của vận động viên " << athletes[i].name << ": ";
        std::cin >> athletes[i].time;

        validateTime(athletes[i].time);
    }

    sortAthletes(athletes, numAthletes);

    std::cout << "Vận động viên về nhất: " << athletes[0].name << std::endl;
    std::cout << "Vận động viên về nhì: " << athletes[1].name << std::endl;
    std::cout << "Vận động viên về thứ ba: " << athletes[2].name << std::endl;

    return 0;
}