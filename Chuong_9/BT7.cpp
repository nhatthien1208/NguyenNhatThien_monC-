#include <iostream>
#include <algorithm>

const int MAX_CONTRIBUTIONS = 100;


void sortContributionsDescending(int* arrptr[], int numContributions) {
    std::sort(arrptr, arrptr + numContributions, [](const int* a, const int* b) {
        return (*a) > (*b);
        });
}


int calculateTotal(const int* arrptr[], int numContributions) {
    int total = 0;
    for (int i = 0; i < numContributions; i++) {
        total += *arrptr[i];
    }
    return total;
}

int main() {
    int contributions[MAX_CONTRIBUTIONS];
    int* arrptr[MAX_CONTRIBUTIONS];
    int numContributions;

    std::cout << "Nhập số lượng quyên góp: ";
    std::cin >> numContributions;

    for (int i = 0; i < numContributions; i++) {
        std::cout << "Quyên góp thứ " << i + 1 << ": ";
        std::cin >> contributions[i];
        arrptr[i] = &contributions[i];
    }

    sortContributionsDescending(arrptr, numContributions);

    int total = calculateTotal(arrptr, numContributions);

    std::cout << "Tổng giá trị quyên góp là: " << total << std::endl;

    return 0;
}