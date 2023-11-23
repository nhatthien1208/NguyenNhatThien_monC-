#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

struct SalesData {
    std::string division;
    int quarter;
    double revenue;
};

void readSalesData(const std::string& filename, std::vector<SalesData>& salesData) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    SalesData data;
    while (inFile >> data.division >> data.quarter >> data.revenue) {
        salesData.push_back(data);
    }

    inFile.close();
}

double calculateQuarterlyTotal(const std::vector<SalesData>& salesData, int quarter) {
    double total = 0;
    for (const auto& data : salesData) {
        if (data.quarter == quarter) {
            total += data.revenue;
        }
    }
    return total;
}

double calculateAnnualTotal(const std::vector<SalesData>& salesData, const std::string& division) {
    double total = 0;
    for (const auto& data : salesData) {
        if (data.division == division) {
            total += data.revenue;
        }
    }
    return total;
}

double calculateCompanyAnnualTotal(const std::vector<SalesData>& salesData) {
    double total = 0;
    for (const auto& data : salesData) {
        total += data.revenue;
    }
    return total;
}

double calculateAverageQuarterlyRevenue(const std::vector<SalesData>& salesData, const std::string& division) {
    double total = 0;
    int count = 0;
    for (const auto& data : salesData) {
        if (data.division == division) {
            total += data.revenue;
            count++;
        }
    }
    return count > 0 ? total / count : 0;
}

int main() {
    const std::string salesFile = "sales_data.txt";

    std::vector<SalesData> salesData;
    readSalesData(salesFile, salesData);

    // Calculate quarterly totals
    std::cout << "Quarterly Totals:" << std::endl;
    for (int quarter = 1; quarter <= 4; ++quarter) {
        double total = calculateQuarterlyTotal(salesData, quarter);
        std::cout << "Quarter " << quarter << ": " << total << std::endl;
    }
    std::cout << std::endl;

    // Calculate annual totals for each division
    std::cout << "Annual Totals by Division:" << std::endl;
    std::vector<std::string> divisions = { "East", "West", "North", "South" };
    for (const auto& division : divisions) {
        double total = calculateAnnualTotal(salesData, division);
        std::cout << division << ": " << total << std::endl;
    }
    std::cout << std::endl;

    // Calculate company's annual total
    double companyTotal = calculateCompanyAnnualTotal(salesData);
    std::cout << "Company's Annual Total: " << companyTotal << std::endl;
    std::cout << std::endl;

    // Calculate average quarterly revenue for each division
    std::cout << "Average Quarterly Revenue by Division:" << std::endl;
    for (const auto& division : divisions) {
        double averageRevenue = calculateAverageQuarterlyRevenue(salesData, division);
        std::cout << division << ": " << averageRevenue << std::endl;
    }
    std::cout << std::endl;

    // Find highest and lowest quarters for the company
    std::vector<double> quarterlyTotals;
    for (int quarter = 1; quarter <= 4; ++quarter) {
        double total = calculateQuarterlyTotal(salesData, quarter);
        quarterlyTotals.push_back(total);
    }

    auto maxQuarter = std::max_element(quarterlyTotals.begin(), quarterlyTotals.end());
    auto minQuarter = std::min_element(quarterlyTotals.begin(), quarterlyTotals.end());

    int maxQuarterIndex = std::distance(quarterlyTotals.begin(), maxQuarter) + 1;
    int minQuarterIndex = std::distance(quarterlyTotals.begin(), minQuarter) + 1;

    std::cout << "Highest Quarter: " << maxQuarterIndex << std::endl;
    std::cout << "Lowest Quarter: " << minQuarterIndex << std::endl;

    return 0;
}