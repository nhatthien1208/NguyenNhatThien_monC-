#include <iostream>

struct HourlyWorker {
    float hoursWorked;
    float hourlyRate;
    float wage;
    float bonus;
};

struct SalariedWorker {
    float salary;
    float bonus;
};

union Worker {
    HourlyWorker hourlyWorker;
    SalariedWorker salariedWorker;
};

int main() {
    int choice;
    Worker worker;

    std::cout << "Choose the type of worker:\n";
    std::cout << "1. Hourly Worker\n";
    std::cout << "2. Salaried Worker\n";
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter the number of hours worked: ";
        std::cin >> worker.hourlyWorker.hoursWorked;
        while (worker.hourlyWorker.hoursWorked < 0 || worker.hourlyWorker.hoursWorked > 80) {
            std::cout << "Invalid input. Please enter a value between 0 and 80: ";
            std::cin >> worker.hourlyWorker.hoursWorked;
        }

        std::cout << "Enter the hourly rate: ";
        std::cin >> worker.hourlyWorker.hourlyRate;
        while (worker.hourlyWorker.hourlyRate < 0) {
            std::cout << "Invalid input. Please enter a positive value: ";
            std::cin >> worker.hourlyWorker.hourlyRate;
        }

        // Calculate wage
        worker.hourlyWorker.wage = worker.hourlyWorker.hoursWorked * worker.hourlyWorker.hourlyRate;

        std::cout << "Enter the bonus amount: ";
        std::cin >> worker.hourlyWorker.bonus;
        while (worker.hourlyWorker.bonus < 0) {
            std::cout << "Invalid input. Please enter a positive value: ";
            std::cin >> worker.hourlyWorker.bonus;
        }
    }
    else if (choice == 2) {
        std::cout << "Enter the salary: ";
        std::cin >> worker.salariedWorker.salary;
        while (worker.salariedWorker.salary < 0) {
            std::cout << "Invalid input. Please enter a positive value: ";
            std::cin >> worker.salariedWorker.salary;
        }

        std::cout << "Enter the bonus amount: ";
        std::cin >> worker.salariedWorker.bonus;
        while (worker.salariedWorker.bonus < 0) {
            std::cout << "Invalid input. Please enter a positive value: ";
            std::cin >> worker.salariedWorker.bonus;
        }
    }
    else {
        std::cout << "Invalid choice. Exiting program.\n";
        return 0;
    }

    std::cout << "\nSalary Report:\n";
    std::cout << "-----------------\n";
    if (choice == 1) {
        std::cout << "Hours worked: " << worker.hourlyWorker.hoursWorked << std::endl;
        std::cout << "Hourly rate: $" << worker.hourlyWorker.hourlyRate << std::endl;
        std::cout << "Wage: $" << worker.hourlyWorker.wage << std::endl;
        std::cout << "Bonus: $" << worker.hourlyWorker.bonus << std::endl;
        std::cout << "Total earnings: $" << worker.hourlyWorker.wage + worker.hourlyWorker.bonus << std::endl;
    }
    else if (choice == 2) {
        std::cout << "Salary: $" << worker.salariedWorker.salary << std::endl;
        std::cout << "Bonus: $" << worker.salariedWorker.bonus << std::endl;
        std::cout << "Total earnings: $" << worker.salariedWorker.salary + worker.salariedWorker.bonus << std::endl;
    }

    return 0;
}