#include <iostream>

double calculateBMI(double weight, double height) {
    double heightInMeter = height / 39.37;

    double bmi = weight / (heightInMeter * heightInMeter);

    return bmi;
}

void displayWeightStatus(double bmi) {
    if (bmi < 18.5) {
        std::cout << "Ban dang thieu can.\n";
    }
    else if (bmi >= 18.5 && bmi <= 25) {
        std::cout << "Ban co can nang toi uu.\n";
    }
    else {
        std::cout << "Ban dang thua can.\n";
    }
}

int main() {
    double weight, height;

    std::cout << "Nhap can nang (pound): ";
    std::cin >> weight;

    std::cout << "Nhap chieu cao (inch): ";
    std::cin >> height;

    double bmi = calculateBMI(weight, height);

    std::cout << "Chi so BMI cua ban: " << bmi << std::endl;

    displayWeightStatus(bmi);

    return 0;
}