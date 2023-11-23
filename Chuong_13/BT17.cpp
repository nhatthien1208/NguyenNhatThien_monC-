#include <iostream>

class InventoryItem {
private:
    std::string itemName;
    double itemPrice;
    int itemQuantity;

public:
    InventoryItem(std::string name, double price, int quantity) {
        itemName = name;
        itemPrice = price;
        itemQuantity = quantity;
    }

    std::string getName() const {
        return itemName;
    }

    double getPrice() const {
        return itemPrice;
    }

    int getQuantity() const {
        return itemQuantity;
    }

    void reduceQuantity(int quantity) {
        if (quantity > itemQuantity) {
            std::cout << "Lỗi: Số lượng mặt hàng không đủ." << std::endl;
            exit(1);
        }

        itemQuantity -= quantity;
    }
};

class CashRegister {
private:
    InventoryItem item;

public:
    CashRegister(InventoryItem inventoryItem) {
        item = inventoryItem;
    }

    void purchaseItem(int quantity) {
        if (quantity < 0) {
            std::cout << "Lỗi: Số lượng mặt hàng không hợp lệ." << std::endl;
            exit(1);
        }

        double itemPrice = item.getPrice();
        double totalCost = itemPrice * quantity;
        double totalCostWithProfit = totalCost + (0.3 * totalCost);
        double totalCostWithTax = totalCostWithProfit + (0.06 * totalCostWithProfit);

        std::cout << "Tên mặt hàng: " << item.getName() << std::endl;
        std::cout << "Số lượng mua: " << quantity << std::endl;
        std::cout << "Tổng số tiền mua hàng: $" << totalCost << std::endl;
        std::cout << "Tổng số tiền mua hàng (bao gồm lợi nhuận): $" << totalCostWithProfit << std::endl;
        std::cout << "Tổng số tiền mua hàng (bao gồm thuế): $" << totalCostWithTax << std::endl;

        item.reduceQuantity(quantity);
    }
};

int main() {
    InventoryItem item("Áo sơ mi", 50.0, 10);
    CashRegister cashRegister(item);

    int quantity;
    std::cout << "Nhập số lượng mua: ";
    std::cin >> quantity;

    cashRegister.purchaseItem(quantity);

    return 0;
}