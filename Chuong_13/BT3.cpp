#include <iostream>
#include <string>

class Car {
private:
    int modelYear;
    std::string brand;
    int speed;

public:
    Car(int year, const std::string& carBrand)
        : modelYear(year), brand(carBrand), speed(0) {}

    int getModelYear() const {
        return modelYear;
    }

    std::string getBrand() const {
        return brand;
    }

    int getSpeed() const {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
        if (speed < 0)
            speed = 0;
    }
};

int main() {
    Car myCar(2022, "Toyota");

    std::cout << "Model Year: " << myCar.getModelYear() << std::endl;
    std::cout << "Brand: " << myCar.getBrand() << std::endl;

    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        std::cout << "Current Speed: " << myCar.getSpeed() << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        myCar.brake();
        std::cout << "Current Speed: " << myCar.getSpeed() << std::endl;
    }

    return 0;
}