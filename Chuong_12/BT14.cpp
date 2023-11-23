#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

struct InventoryItem {
    std::string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    std::string dateAdded;
};

void readInventoryData(const std::string& filename, std::vector<InventoryItem>& inventoryData) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    InventoryItem data;
    while (std::getline(inFile, data.description) &&
        inFile >> data.quantity >> data.wholesaleCost >> data.retailCost >> data.dateAdded) {
        inventoryData.push_back(data);
        inFile.ignore(); 
    }

    inFile.close();
}

double calculateTotalWholesaleValue(const std::vector<InventoryItem>& inventoryData) {
    double total = 0;
    for (const auto& item : inventoryData) {
        total += item.quantity * item.wholesaleCost;
    }
    return total;
}

double calculateTotalRetailValue(const std::vector<InventoryItem>& inventoryData) {
    double total = 0;
    for (const auto& item : inventoryData) {
        total += item.quantity * item.retailCost;
    }
    return total;
}

int calculateTotalQuantity(const std::vector<InventoryItem>& inventoryData) {
    int total = 0;
    for (const auto& item : inventoryData) {
        total += item.quantity;
    }
    return total;
}

int main() {
    const std::string inventoryFile = "inventory_data.txt";

    std::vector<InventoryItem> inventoryData;
    readInventoryData(inventoryFile, inventoryData);

  
    double totalWholesaleValue = calculateTotalWholesaleValue(inventoryData);
    std::cout << "Total Wholesale Value: " << totalWholesaleValue << std::endl;

    
    double totalRetailValue = calculateTotalRetailValue(inventoryData);
    std::cout << "Total Retail Value: " << totalRetailValue << std::endl;

    
    int totalQuantity = calculateTotalQuantity(inventoryData);
    std::cout << "Total Quantity: " << totalQuantity << std::endl;

    return 0;
}