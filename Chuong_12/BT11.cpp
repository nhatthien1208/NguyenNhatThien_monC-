#include <iostream>
#include <fstream>

struct SalesData {
    std::string division;
    int quarter;
    double revenue;
};

void writeSalesData(const std::string& filename, const SalesData& data) {
    std::ofstream outFile(filename, std::ios::app); // Open file in append mode
    if (!outFile) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    outFile << data.division << " " << data.quarter << " " << data.revenue << std::endl;

    outFile.close();
}

SalesData getSalesData(const std::string& division, int quarter) {
    SalesData data;
    data.division = division;
    data.quarter = quarter;

    std::cout << "Enter revenue for " << division << " division, Quarter " << quarter << ": ";
    std::cin >> data.revenue;

    // Validate input (no negative revenue)
    while (data.revenue < 0) {
        std::cout << "Revenue cannot be negative. Enter revenue again: ";
        std::cin >> data.revenue;
    }

    return data;
}

int main() {
    const std::string eastFile = "east_sales.txt";
    const std::string westFile = "west_sales.txt";
    const std::string northFile = "north_sales.txt";
    const std::string southFile = "south_sales.txt";

    for (int quarter = 1; quarter <= 4; ++quarter) {
        SalesData eastData = getSalesData("East", quarter);
        writeSalesData(eastFile, eastData);

        SalesData westData = getSalesData("West", quarter);
        writeSalesData(westFile, westData);

        SalesData northData = getSalesData("North", quarter);
        writeSalesData(northFile, northData);

        SalesData southData = getSalesData("South", quarter);
        writeSalesData(southFile, southData);
    }

    std::cout << "Sales data written to files successfully." << std::endl;

    return 0;
}