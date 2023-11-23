#include <iostream>
#include <cmath>

double presentValue(double futureValue, double interestRate, int numYears)
{
    double presentValue = futureValue / pow(1 + interestRate, numYears);

    return presentValue;
}

int main()
{
    double futureValue, interestRate;
    int numYears;

    std::cout << "Nhập giá trị tương lai bạn muốn có trong tài khoản (USD): ";
    std::cin >> futureValue;

    std::cout << "Nhập lãi suất hàng năm (dưới dạng phần trăm): ";
    std::cin >> interestRate;

    std::cout << "Nhập số năm bạn dự định để tiền trong tài khoản: ";
    std::cin >> numYears;

    interestRate /= 100; 

    double presentVal = presentValue(futureValue, interestRate, numYears);

    std::cout << "Số tiền cần đặt cọc ngay hôm nay: " << presentVal << " USD" << std::endl;

    return 0;
}