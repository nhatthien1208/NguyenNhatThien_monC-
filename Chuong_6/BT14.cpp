#include <iostream>

void getOrderStatus(int orderedCoils, int availableCoils, bool specialHandling = false, double handlingFee = 10.0)
{
    int readyToShipCoils = std::min(orderedCoils, availableCoils);
    int preOrderedCoils = orderedCoils - readyToShipCoils;
    double shippingTotal = readyToShipCoils * 100.0;
    double handlingTotal = specialHandling ? preOrderedCoils * handlingFee : 0.0;
    double orderTotal = shippingTotal + handlingTotal;

    std::cout << "Số lượng cuộn sẵn sàng xuất xưởng từ kho hiện tại: " << readyToShipCoils << std::endl;
    std::cout << "Số lượng cuộn được đặt hàng trước: " << preOrderedCoils << std::endl;
    std::cout << "Tổng số phần sẵn sàng vận chuyển: $" << shippingTotal << std::endl;
    std::cout << "Tổng phí vận chuyển và xử lý trên phần hàng đã sẵn sàng để vận chuyển: $" << handlingTotal << std::endl;
    std::cout << "Tổng số đơn hàng đã sẵn sàng để vận chuyển: $" << orderTotal << std::endl;
}

int main()
{
    int orderedCoils, availableCoils;
    bool specialHandling;
    double handlingFee;

    std::cout << "Nhập số lượng cuộn đặt hàng: ";
    std::cin >> orderedCoils;

    std::cout << "Nhập số lượng cuộn trong kho: ";
    std::cin >> availableCoils;

    std::cout << "Có phí vận chuyển và xử lý đặc biệt hay không (0 - Không, 1 - Có): ";
    std::cin >> specialHandling;

    if (specialHandling) {
        std::cout << "Nhập phí vận chuyển và xử lý đặc biệt cho mỗi ống cuộn: $";
        std::cin >> handlingFee;
    }

    getOrderStatus(orderedCoils, availableCoils, specialHandling, handlingFee);

    return 0;
}