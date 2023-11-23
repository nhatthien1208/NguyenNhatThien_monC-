#include <iostream>
#include <string>

double getSales(const std::string& department)
{
    double sales;
    std::cout << "Enter the sales for " << department << " department: $";
    std::cin >> sales;

    // Validate input
    while (sales < 0.0)
    {
        std::cout << "Invalid input. Sales cannot be negative. Enter the sales for " << department << " department: $";
        std::cin >> sales;
    }

    return sales;
}

void findHighest()
{
    double maxSales = 0.0;
    std::string maxDepartment;

    for (int i = 0; i < 4; ++i)
    {
        std::string department;
        double sales;

        switch (i)
        {
        case 0:
            department = "Northeast";
            break;
        case 1:
            department = "Southeast";
            break;
        case 2:
            department = "Northwest";
            break;
        case 3:
            department = "Southwest";
            break;
        }

        sales = getSales(department);

        if (sales > maxSales)
        {
            maxSales = sales;
            maxDepartment = department;
        }
    }

    std::cout << "The department with the highest sales is " << maxDepartment << "." << std::endl;
    std::cout << "Sales: $" << maxSales << std::endl;
}

int main()
{
    findHighest();

    return 0;
}