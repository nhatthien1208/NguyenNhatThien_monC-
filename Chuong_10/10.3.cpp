#include <iostream>
#include <cctype>
#include <iomanip>

int main()
{
    const double PI = 3.14159;
    double radius;
    char goAgain;

    std::cout << "This program calculates the area of a circle.\n";
    std::cout << std::fixed << std::setprecision(2);

    do
    {
        std::cout << "Enter the circle's radius: ";
        std::cin >> radius;
        std::cout << "The area is " << (PI * radius * radius) << std::endl;

        std::cout << "Calculate another? (Y or N) ";
        std::cin >> goAgain;

        goAgain = std::tolower(goAgain);

        while (goAgain != 'y' && goAgain != 'n')
        {
            std::cout << "Please enter Y or N: ";
            std::cin >> goAgain;
            goAgain = std::tolower(goAgain);
        }

    } while (goAgain == 'y');

    return 0;
}