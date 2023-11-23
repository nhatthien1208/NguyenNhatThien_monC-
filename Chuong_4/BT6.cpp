#include <iostream>

double calculateWeight(double mass) {
    double weight = mass * 9.8;

    return weight;
}

void displayWeightStatus(double weight) {
    if (weight > 1000) {
        std::cout << "Vat qua nang.\n";
    }
    else if (weight < 10) {
        std::cout << "Vat qua nhe.\n";
    }
}

int main() {
    double mass;

    std::cout << "Nhap khoi luong cua vat (kg): ";
    std::cin >> mass;

    double weight = calculateWeight(mass);

    std::cout << "Trong luong cua vat: " << weight << " N\n";

    displayWeightStatus(weight);

    return 0;
}