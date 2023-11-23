#include <iostream>

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory()
        : itemNumber(0), quantity(0), cost(0), totalCost(0) {}

    Inventory(int itemNum, int itemQuantity, double itemCost)
        : itemNumber(itemNum), quantity(itemQuantity), cost(itemCost) {
        setTotalCost();
    }

    void setItemNumber(int itemNum) {
        itemNumber = itemNum;
    }

    void setQuantity(int itemQuantity) {
        quantity = itemQuantity;
        setTotalCost();
    }

    void setCost(double itemCost) {
        cost = itemCost;
        setTotalCost();
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    
    Inventory item;

    
    item.setItemNumber(123);
    item.setQuantity(10);
    item.setCost(5.99);

  
    std::cout << "Mặt hàng số: " << item.getItemNumber() << std::endl;
    std::cout << "Số lượng: " << item.getQuantity() << std::endl;
    std::cout << "Chi phí: $" << item.getCost() << std::endl;
    std::cout << "Tổng chi phí tồn kho: $" << item.getTotalCost() << std::endl;

    return 0;
}