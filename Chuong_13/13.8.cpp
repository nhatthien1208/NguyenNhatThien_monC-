#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    double houseWidth, houseLength;

    cout << "In feet, how wide is your house? ";
    cin >> houseWidth;

    cout << "In feet, how long is your house? ";
    cin >> houseLength;

    Rectangle house(houseWidth, houseLength);

    cout << setprecision(2) << fixed;
    cout << "The house is " << house.getWidth() << " feet wide.\n";
    cout << "The house is " << house.getLength() << " feet long.\n";
    cout << "The house is " << house.getArea() << " square feet in area.\n";

    return 0;
}