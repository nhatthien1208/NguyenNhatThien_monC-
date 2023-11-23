#include <iostream>

class MortgagePayment {
private:
    double loanAmount; 
    double interestRate; 
    int years; 

public:
    
    MortgagePayment(double amount, double rate, int numYears) {
        if (amount < 0 || rate < 0 || numYears < 0) {
            std::cout << "Lỗi: Giá trị không hợp lệ!" << std::endl;
            exit(1);
        }

        loanAmount = amount;
        interestRate = rate;
        years = numYears;
    }

    
    double calculateMonthlyPayment() const {
        double monthlyInterestRate = interestRate / 12 / 100; 
        int numPayments = years * 12; 

        double monthlyPayment = (loanAmount * monthlyInterestRate) /
            (1 - pow(1 + monthlyInterestRate, -numPayments));

        return monthlyPayment;
    }

    // Hàm tính toán tổng số tiền trả ngân hàng khi kết thúc khoản vay
    double calculateTotalPayment() const {
        double monthlyPayment = calculateMonthlyPayment();
        int numPayments = years * 12; // Tổng số kỳ thanh toán

        double totalPayment = monthlyPayment * numPayments;
        return totalPayment;
    }
};

int main() {
    double loanAmount, interestRate;
    int years;

    std::cout << "Nhập số tiền của khoản vay: ";
    std::cin >> loanAmount;

    std::cout << "Nhập lãi suất hàng năm (%): ";
    std::cin >> interestRate;

    std::cout << "Nhập số năm vay: ";
    std::cin >> years;

    
    MortgagePayment mortgage(loanAmount, interestRate, years);

    
    double monthlyPayment = mortgage.calculateMonthlyPayment();
    std::cout << "Số tiền thanh toán hàng tháng: $" << monthlyPayment << std::endl;

    
    double totalPayment = mortgage.calculateTotalPayment();
    std::cout << "Tổng số tiền trả ngân hàng khi kết thúc khoản vay: $" << totalPayment << std::endl;

    return 0;
}