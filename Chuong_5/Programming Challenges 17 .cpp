#include <iostream>

int main() {
    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    std::cout << "Nhập doanh số bán hàng hôm nay cho 5 cửa hàng:\n";

    for (int i = 0; i < NUM_STORES; i++) {
        std::cout << "Nhập doanh số bán hàng của cửa hàng " << i + 1 << ": ";
        std::cin >> sales[i];
    }

    std::cout << "BIỂU ĐỒ CỘT DOANH SỐ BÁN HÀNG\n";
    std::cout << "(Mỗi * tương đương với $100)\n";

    for (int i = 0; i < NUM_STORES; i++) {
        std::cout << "Cửa hàng " << i + 1 << ": ";
        for (int j = 0; j < sales[i] / 100; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}