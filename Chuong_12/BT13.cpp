#include <iostream>
#include <fstream>
#include <string>

struct InventoryRecord {
    std::string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    std::string dateAdded;
};

void addRecord(std::ofstream& outFile) {
    InventoryRecord record;

    std::cout << "Enter description: ";
    std::getline(std::cin >> std::ws, record.description);

    std::cout << "Enter quantity: ";
    std::cin >> record.quantity;

    std::cout << "Enter wholesale cost: ";
    std::cin >> record.wholesaleCost;

    std::cout << "Enter retail cost: ";
    std::cin >> record.retailCost;

    std::cout << "Enter date added: ";
    std::cin.ignore();
    std::getline(std::cin >> std::ws, record.dateAdded);

    outFile << record.description << ',' << record.quantity << ',' << record.wholesaleCost << ',' << record.retailCost << ',' << record.dateAdded << std::endl;

    std::cout << "Record added successfully." << std::endl;
}

void displayRecords(std::ifstream& inFile) {
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
}

void modifyRecord(std::fstream& file) {
    std::string searchDescription;
    std::cout << "Enter the description of the record to modify: ";
    std::getline(std::cin >> std::ws, searchDescription);

    std::string line;
    std::streampos foundPosition = -1;
    while (std::getline(file, line)) {
        std::streampos currentPosition = file.tellg();
        std::string description = line.substr(0, line.find(','));

        if (description == searchDescription) {
            foundPosition = currentPosition;
            break;
        }
    }

    if (foundPosition == -1) {
        std::cout << "Record not found." << std::endl;
        return;
    }

    InventoryRecord record;
    file.seekg(foundPosition);

    std::getline(file, line);
    record.description = line.substr(0, line.find(','));

    std::cout << "Enter new quantity: ";
    std::cin >> record.quantity;

    std::cout << "Enter new wholesale cost: ";
    std::cin >> record.wholesaleCost;

    std::cout << "Enter new retail cost: ";
    std::cin >> record.retailCost;

    std::cout << "Enter new date added: ";
    std::cin.ignore();
    std::getline(std::cin >> std::ws, record.dateAdded);

    file.seekp(foundPosition);
    file << record.description << ',' << record.quantity << ',' << record.wholesaleCost << ',' << record.retailCost << ',' << record.dateAdded;

    std::cout << "Record modified successfully." << std::endl;
}

int main() {
    const std::string inventoryFile = "inventory.txt";

    std::ofstream outFile(inventoryFile, std::ios::app);
    if (!outFile) {
        std::cout << "Error opening file: " << inventoryFile << std::endl;
        return 1;
    }

    outFile.close();

    std::ifstream inFile(inventoryFile);
    if (!inFile) {
        std::cout << "Error opening file: " << inventoryFile << std::endl;
        return 1;
    }

    std::fstream file(inventoryFile, std::ios::in | std::ios::out);
    if (!file) {
        std::cout << "Error opening file: " << inventoryFile << std::endl;
        return 1;
    }

    int choice;
    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add a record" << std::endl;
        std::cout << "2. Display records" << std::endl;
        std::cout << "3. Modify a record" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            addRecord(file);
            break;
        case 2:
            displayRecords(inFile);
            break;
        case 3:
            modifyRecord(file);
            break;
        case 4:
            std::cout << "Exiting..."                break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }

        std::cout << std::endl;
    } while (choice != 4);