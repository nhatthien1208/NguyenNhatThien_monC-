#include <iostream>
#include <cmath>

double futureValue(double presentValue, double interestRate, int numMonths)
{
    double futureValue = presentValue * pow(1 + interestRate, numMonths);

    return futureValue;
}

int main()
{
    double presentValue, interestRate;
    int numMonths;

    std::cout << "Nhập giá trị hiện tại của tài khoản (USD): ";
    std::cin >> presentValue;

    std::cout << "Nhập lãi suất hàng tháng (dưới dạng phần trăm): ";
    std::cin >> interestRate;

    std::cout << "Nhập số tháng mà tiền sẽ còn lại trong tài khoản: ";
    std::cin >> numMonths;

    interestRate /= 100; 

    double futureVal = futureValue(presentValue, interestRate, numMonths);

    std::cout << "Giá trị tương lai của tài khoản sau " << numMonths << " tháng: " << futureVal << " USD" << std::endl;

    return 0;
}