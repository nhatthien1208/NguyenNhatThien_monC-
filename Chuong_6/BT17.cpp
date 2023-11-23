#include <iostream>

double calculatePaintCost(int numRooms, double paintPrice, int wallArea)
{
    if (numRooms < 1 || paintPrice < 10.0 || wallArea < 0) {
        std::cout << "Dữ liệu không hợp lệ." << std::endl;
        return -1.0;
    }

    int gallonNeeded = wallArea / 110 + 1; 
    int laborHours = gallonNeeded * 8; 
    double paintCost = gallonNeeded * paintPrice; 
    double laborCost = laborHours * 25.0; 
    double totalCost = paintCost + laborCost; 

    std::cout << "Số gallon sơn cần thiết: " << gallonNeeded << std::endl;
    std::cout << "Số giờ lao động cần thiết: " << laborHours << std::endl;
    std::cout << "Chi phí sơn: $" << paintCost << std::endl;
    std::cout << "Chi phí lao động: $" << laborCost << std::endl;
    std::cout << "Tổng chi phí sơn: $" << totalCost << std::endl;

    return totalCost;
}

int main()
{
    int numRooms, wallArea;
    double paintPrice;

    std::cout << "Nhập số lượng phòng cần sơn: ";
    std::cin >> numRooms;

    std::cout << "Nhập giá sơn mỗi gallon: $";
    std::cin >> paintPrice;

    double totalCost = 0.0;

    for (int i = 0; i < numRooms; i++) {
        std::cout << "Nhập diện tích tường cho phòng " << (i + 1) << " (feet vuông): ";
        std::cin >> wallArea;

        totalCost += calculatePaintCost(numRooms, paintPrice, wallArea);
    }

    std::cout << "Tổng chi phí sơn cho " << numRooms << " phòng: $" << totalCost << std::endl;

    return 0;
}