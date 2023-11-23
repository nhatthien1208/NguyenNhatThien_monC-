#include <iostream>

double calculateTotalCost(int quantity) {
    double unitPrice = 99.0; 
    double totalCost = 0.0; 

    if (quantity >= 10 && quantity <= 19) {
        totalCost = quantity * unitPrice * 0.8; 
    }
    else if (quantity >= 20 && quantity <= 49) {
        totalCost = quantity * unitPrice * 0.7; 
    }
    else if (quantity >= 50 && quantity <= 99) {
        totalCost = quantity * unitPrice * 0.6; 
    }
    else if (quantity >= 100) {
        totalCost = quantity * unitPrice * 0.5; 
    }
    else {
        totalCost = quantity * unitPrice; 
    }

    return totalCost;
}

int main() {
    int quantity;

    std::cout << "Nhập số lượng sản phẩm đã bán: ";
    std::cin >> quantity;

    if (quantity <= 0) {
        std::cout << "Số lượng không hợp lệ." << std::endl;
        return 0;
    }

    double totalCost = calculateTotalCost(quantity);

    std::cout << "Tổng chi phí mua là: $" << totalCost << std::endl;

    return 0;
}