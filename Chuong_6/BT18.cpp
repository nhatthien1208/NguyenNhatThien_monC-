#include <iostream>

double calculateProfit(int shares, double purchasePrice, double salePrice)
{
    if (shares <= 0 || purchasePrice <= 0 || salePrice <= 0) {
        std::cout << "Dữ liệu không hợp lệ." << std::endl;
        return 0.0;
    }

    double profit = (salePrice - purchasePrice) * shares;
    return profit;
}

int main()
{
    int numSales;
    double totalProfit = 0.0;

    std::cout << "Nhập số lượng lần bán cổ phiếu: ";
    std::cin >> numSales;

    for (int i = 0; i < numSales; i++) {
        int shares;
        double purchasePrice, salePrice;

        std::cout << "Lần bán thứ " << (i + 1) << std::endl;

        std::cout << "Nhập số lượng cổ phiếu: ";
        std::cin >> shares;

        std::cout << "Nhập giá mua: $";
        std::cin >> purchasePrice;

        std::cout << "Nhập giá bán: $";
        std::cin >> salePrice;

        double profit = calculateProfit(shares, purchasePrice, salePrice);
        totalProfit += profit;
    }

    std::cout << "Tổng lãi hoặc lỗ từ việc bán cổ phiếu: $" << totalProfit << std::endl;

    return 0;
}