#include <iostream>

double kineticEnergy(double m, double v)
{
    double KE = 0.5 * m * v * v;                

    return KE;
}

int main()
{
    double mass, velocity;

    std::cout << "Nhập khối lượng của vật (kg): ";
    std::cin >> mass;

    std::cout << "Nhập vận tốc của vật (m/s): ";
    std::cin >> velocity;

    double energy = kineticEnergy(mass, velocity);

    std::cout << "Động năng của vật là: " << energy << " joule" << std::endl;

    return 0;
}