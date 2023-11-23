#include <iostream>

double celsius(double fahrenheit)
{
    double c = (fahrenheit - 32) * 5 / 9; 
    return c;
}

int main()
{
    for (int fahrenheit = 0; fahrenheit <= 20; ++fahrenheit)
    {
        double c = celsius(fahrenheit);

        std::cout << "Nhiệt độ Fahrenheit: " << fahrenheit << "\t";
        std::cout << "Nhiệt độ Celsius: " << c << std::endl;
    }

    return 0;
}