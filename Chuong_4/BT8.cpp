#include <iostream>
#include <string>

std::string mixColors(std::string color1, std::string color2) {
    if (color1 == "đỏ" && color2 == "xanh lam") {
        return "tím";
    }
    else if (color1 == "đỏ" && color2 == "vàng") {
        return "cam";
    }
    else if (color1 == "xanh lam" && color2 == "vàng") {
        return "xanh lá cây";
    }
    else {
        return "Lỗi: Màu không hợp lệ.";
    }
}

int main() {
    std::string color1, color2;

    std::cout << "Nhập màu cơ bản thứ nhất: ";
    std::cin >> color1;

    std::cout << "Nhập màu cơ bản thứ hai: ";
    std::cin >> color2;

    std::string mixedColor = mixColors(color1, color2);

    std::cout << "Màu thứ cấp sau khi trộn là: " << mixedColor << std::endl;

    return 0;
}