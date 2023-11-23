#include <iostream>

class Population {
private:
    double population;
    double births;
    double deaths;

public:
    Population(double pop, double numBirths, double numDeaths)
        : population(pop), births(numBirths), deaths(numDeaths) {}

    double getBirthRate() const {
        return births / population;
    }

    double getDeathRate() const {
        return deaths / population;
    }
};

int main() {
    double population, births, deaths;

    
    std::cout << "Nhập dân số: ";
    std::cin >> population;
    std::cout << "Nhập số lần sinh: ";
    std::cin >> births;
    std::cout << "Nhập số lượng tử vong: ";
    std::cin >> deaths;

  
    if (population < 1 || births < 0 || deaths < 0) {
        std::cout << "Dữ liệu không hợp lệ!" << std::endl;
        return 0;
    }


    Population populationData(population, births, deaths);


    std::cout << "Tỷ lệ sinh: " << populationData.getBirthRate() << std::endl;
    std::cout << "Tỷ lệ tử vong: " << populationData.getDeathRate() << std::endl;

    return 0;
}