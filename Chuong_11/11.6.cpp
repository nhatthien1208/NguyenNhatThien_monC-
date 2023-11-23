#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct InventoryItem
{
    int partNum; // Part number 
    string description; // Item description 
    int onHand; // Units on hand 
    double price; // Unit price 
};

// Function Prototypes 
void getItem(InventoryItem&); // Argument passed by reference 
void showItem(const InventoryItem&); // Argument passed by const reference 

int main()
{
    InventoryItem part;

    getItem(part);
    showItem(part);

    return 0;
}

// Definition of function getItem. This function uses 
// a structure reference variable as its parameter. It asks 
// the user for information to store in the structure.
void getItem(InventoryItem& p)
{
    cout << "Enter the part number: ";
    cin >> p.partNum;

    cout << "Enter the part description: ";
    cin.ignore();
    getline(cin, p.description);

    cout << "Enter the quantity on hand: ";
    cin >> p.onHand;

    cout << "Enter the unit price: ";
    cin >> p.price;
}

// Definition of function showItem. This function accepts 
// an argument of the InventoryItem structure type. The 
// contents of the structure is displayed.
void showItem(const InventoryItem& p)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part Number: " << p.partNum << endl;
    cout << "Description: " << p.description << endl;
    cout << "Units On Hand: " << p.onHand << endl;
    cout << "Price: $" << p.price << endl;
}