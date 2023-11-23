#include <iostream>

const int MAX_CONTRIBUTIONS = 100;


int inputContributions(int contributions[]) {
    int numContributions;

    std::cout << "Nhập số lượng quyên góp: ";
    std::cin >> numContributions;

    std::cout << "Nhập giá trị của các quyên góp:\n";
    for (int i = 0; i < numContributions; i++) {
        std::cout << "Quyên góp thứ " << i + 1 << ": ";
        std::cin >> contributions[i];
    }

    return numContributions;
}


int calculateTotal(const int contributions[], int numContributions) {
    int total = 0;
    for (int i = 0; i < numContributions; i++) {
        total += contributions[i];
    }
    return total;
}

int main() {
    int contributions[MAX_CONTRIBUTIONS];
    int numContributions;

    numContributions = inputContributions(contributions);

    int total = calculateTotal(contributions, numContributions);

    std::cout << "Tổng giá trị quyên góp là: " << total << std::endl;

    return 0;
}