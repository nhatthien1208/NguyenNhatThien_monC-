#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31;    // Description size

// Declaration of InventoryItem structure
struct InventoryItem
{
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main()
{
    InventoryItem record;    // To hold an inventory record
    long recNum;             // To hold a record number

    // Open the file in binary mode for input and output
    fstream inventory("Inventory.dat", ios::in | ios::out | ios::binary);

    // Test for errors.
    if (!inventory)
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    // Get the record number of the desired record.
    cout << "Which record do you want to edit? ";
    cin >> recNum;

    // Move to the record and read it.
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char*>(&record), sizeof(record));

    // Display the record contents.
    cout << "Description: " << record.desc << endl;
    cout << "Quantity: " << record.qty << endl;
    cout << "Price: " << record.price << endl;

    // Get the new record data.
    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    // Move back to the beginning of this record's position.
    inventory.seekp(recNum * sizeof(record), ios::beg);

    // Write the new record over the current record.
    inventory.write(reinterpret_cast<char*>(&record), sizeof(record));

    // Close the file.
    inventory.close();
    return 0;
}