#include <iostream>

int calculatePopulation(int initialPopulation, double birthRate, double deathRate, int immigration, int emigration, int numYears)
{
    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || immigration < 0 || emigration < 0) {
        std::cout << "Dữ liệu không hợp lệ." << std::endl;
        return -1;
    }

    int population = initialPopulation;

    for (int i = 0; i < numYears; i++) {
        int births = population * birthRate;
        int deaths = population * deathRate;

        population += (births - deaths + immigration - emigration);
    }

    return population;
}

int main()
{
    int initialPopulation, immigration, emigration, numYears;
    double birthRate, deathRate;

    std::cout << "Nhập dân số ban đầu: ";
    std::cin >> initialPopulation;

    std::cout << "Nhập tỷ lệ sinh hàng năm: ";
    std::cin >> birthRate;

    std::cout << "Nhập tỷ lệ tử vong hàng năm: ";
    std::cin >> deathRate;

    std::cout << "Nhập số lượt đến khu vực này mỗi năm: ";
    std::cin >> immigration;

    std::cout << "Nhập số lượt khởi hành diện tích mỗi năm: ";
    std::cin >> emigration;

    std::cout << "Nhập số năm: ";
    std::cin >> numYears;

    int finalPopulation = calculatePopulation(initialPopulation, birthRate, deathRate, immigration, emigration, numYears);

    if (finalPopulation >= 0) {
        std::cout << "Dân số sau " << numYears << " năm: " << finalPopulation << std::endl;
    }

    return 0;
}