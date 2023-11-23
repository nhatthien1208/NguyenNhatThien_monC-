#include <iostream>

int doSomething(int* x, int* y) {
    int temp = *x;
    *x = (*y) * 10;
    *y = temp * 10;
    return (*x) + (*y);
}

int main() {
    int x, y;

    std::cout << "Nhập giá trị x: ";
    std::cin >> x;

    std::cout << "Nhập giá trị y: ";
    std::cin >> y;

    int result = doSomething(&x, &y);

    std::cout << "Giá trị mới của x: " << x << std::endl;
    std::cout << "Giá trị mới của y: " << y << std::endl;
    std::cout << "Kết quả: " << result << std::endl;

    return 0;
}