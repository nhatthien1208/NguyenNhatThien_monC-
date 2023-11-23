#include <iostream>
#include <string>

class RetailItem {
private:
    std::string description;
    int unitsOnHand;
    double price;

public:
    RetailItem(const std::string& itemDescription, int itemUnitsOnHand, double itemPrice)
        : description(itemDescription), unitsOnHand(itemUnitsOnHand), price(itemPrice) {}

    std::string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    RetailItem item1("Áo khoác", 12, 59.95);
    RetailItem item2("Quần jean thiết kế", 40, 34.95);
    RetailItem item3("Áo sơ mi", 20, 24.95);

    std::cout << "Mặt hàng số 1:" << std::endl;
    std::cout << "Sự miêu tả: " << item1.getDescription() << std::endl;
    std::cout << "Các đơn vị sẵn có: " << item1.getUnitsOnHand() << std::endl;
    std::cout << "Giá sẵn có: " << item1.getPrice() << std::endl;

    std::cout << std::endl;

    std::cout << "Mặt hàng số 2:" << std::endl;
    std::cout << "Sự miêu tả: " << item2.getDescription() << std::endl;
    std::cout << "Các đơn vị sẵn có: " << item2.getUnitsOnHand() << std::endl;
    std::cout << "Giá sẵn có: " << item2.getPrice() << std::endl;

    std::cout << std::endl;

    std::cout << "Mặt hàng số 3:" << std::endl;
    std::cout << "Sự miêu tả: " << item3.getDescription() << std::endl;
    std::cout << "Các đơn vị sẵn có: " << item3.getUnitsOnHand() << std::endl;
    std::cout << "Giá sẵn có: " << item3.getPrice() << std::endl;

    return 0;
}