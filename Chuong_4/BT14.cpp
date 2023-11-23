#include <iostream>

double calculateServiceFee(double initialBalance, int chequeCount) {
    double serviceFee = 10.0; 

   
    if (initialBalance < 400.0) {
        serviceFee += 15.0; 
    }

  
    if (chequeCount < 0) {
        std::cout << "Tài khoản bị rút quá mức." << std::endl;
        return 0.0;
    }

    if (chequeCount < 20) {
        serviceFee += chequeCount * 0.1; 
    }
    else if (chequeCount >= 20 && chequeCount < 40) {
        serviceFee += chequeCount * 0.08; 
    }
    else if (chequeCount >= 40 && chequeCount < 60) {
        serviceFee += chequeCount * 0.06; 
    }
    else {
        serviceFee += chequeCount * 0.04; 
    }

    return serviceFee;
}

int main() {
    double initialBalance;
    int chequeCount;

    std::cout << "Nhập số dư đầu kỳ: $";
    std::cin >> initialBalance;

    std::cout << "Nhập số lượng séc đã viết: ";
    std::cin >> chequeCount;

    double serviceFee = calculateServiceFee(initialBalance, chequeCount);

    std::cout << "Phí dịch vụ của ngân hàng trong tháng là: $" << serviceFee << std::endl;

    return 0;
}