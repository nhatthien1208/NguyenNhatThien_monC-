#include <iostream>

void displayMenu() {
    std::cout << "Math Tutor Menu\n";
    std::cout << "------------------------\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Quit\n";
    std::cout << "------------------------\n";
    std::cout << "Enter your choice (1-5): ";
}

int main() {
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            // Addition
            int num1, num2;
            std::cout << "Enter two numbers to add: ";
            std::cin >> num1 >> num2;
            int result = num1 + num2;
            std::cout << "Result: " << result << "\n";
            break;
        }
        case 2: {
            // Subtraction
            int num1, num2;
            std::cout << "Enter two numbers to subtract: ";
            std::cin >> num1 >> num2;
            int result = num1 - num2;
            std::cout << "Result: " << result << "\n";
            break;
        }
        case 3: {
            // Multiplication
            int num1, num2;
            std::cout << "Enter two numbers to multiply: ";
            std::cin >> num1 >> num2;
            int result = num1 * num2;
            std::cout << "Result: " << result << "\n";
            break;
        }
        case 4: {
            // Division
            double num1, num2;
            std::cout << "Enter two numbers to divide: ";
            std::cin >> num1 >> num2;
            if (num2 != 0) {
                double result = num1 / num2;
                std::cout << "Result: " << result << "\n";
            }
            else {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        }
        case 5: {
            // Quit
            std::cout << "Exiting the program. Goodbye!\n";
            break;
        }
        default: {
            std::cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            break;
        }
        }
    } while (choice != 5);

    return 0;
}