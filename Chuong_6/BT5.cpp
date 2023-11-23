#include <iostream>

double fallsDistance(double t)
{
    const double g = 9.8; 
    double d = 0.5 * g * t * t; 

    return d;
}

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        double time = static_cast<double>(i);
        double distance = fallsDistance(time);

        std::cout << "Thời gian rơi: " << time << " giây\t";
        std::cout << "Khoảng cách rơi: " << distance << " mét" << std::endl;
    }

    return 0;
}