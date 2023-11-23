#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main()
{
    double cost;

    cout << "Enter the cost of the item: ";
    cin >> cost;

    Sale itemSale(cost); // Using default tax rate

    cout << fixed << showpoint << setprecision(2);
    cout << "The amount of sales tax is $" << itemSale.getTax() << endl;
    cout << "The total of the sale is $" << itemSale.getTotal() << endl;

    return 0;
}