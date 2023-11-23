#include <iostream>

// Function to get the length of the rectangle
double getLength()
{
    double length;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    return length;
}

// Function to get the width of the rectangle
double getWidth()
{
    double width;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    return width;
}

// Function to calculate the area of the rectangle
double getArea(double length, double width)
{
    return length * width;
}

// Function to display the rectangle data
void displayData(double length, double width, double area)
{
    std::cout << "Rectangle Data:" << std::endl;
    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Area: " << area << std::endl;
}

int main()
{
    // Get the length and width of the rectangle from the user
    double length = getLength();
    double width = getWidth();

    // Calculate the area of the rectangle
    double area = getArea(length, width);

    // Display the rectangle data
    displayData(length, width, area);

    return 0;
}