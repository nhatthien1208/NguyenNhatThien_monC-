#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

struct Circle
{
    double radius;
    double diameter;
    double area;
};

Circle getInfo();
void calculateArea(Circle&);

int main()
{
    Circle c;

    c = getInfo();
    calculateArea(c);

    cout << "The radius and area of the circle are:\n";
    cout << fixed << setprecision(2);
    cout << "Radius: " << c.radius << endl;
    cout << "Area: " << c.area << endl;

    return 0;
}

Circle getInfo()
{
    Circle tempCircle;

    cout << "Enter the diameter of a circle: ";
    cin >> tempCircle.diameter;
    tempCircle.radius = tempCircle.diameter / 2.0;

    return tempCircle;
}

void calculateArea(Circle& c)
{
    c.area = PI * pow(c.radius, 2.0);
}