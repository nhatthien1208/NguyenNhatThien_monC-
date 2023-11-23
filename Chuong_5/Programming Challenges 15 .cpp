#include <iostream>

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0.0, totalStateTax = 0.0, totalFederalTax = 0.0, totalFicaWithholdings = 0.0, totalNetPay = 0.0;

    std::cout << "Nhập thông tin báo cáo lương hàng tuần:\n";

    while (true) {
        std::cout << "Số nhân viên (nhập 0 để kết thúc): ";
        std::cin >> employeeNumber;

        if (employeeNumber == 0) {
            break;
        }

        std::cout << "Lương Gross: ";
        std::cin >> grossPay;

        if (grossPay < 0) {
            std::cout << "Lương Gross không hợp lệ. Vui lòng nhập lại.\n";
            continue;
        }

        std::cout << "Thuế tiểu bang: ";
        std::cin >> stateTax;

        if (stateTax < 0 || stateTax > grossPay) {
            std::cout << "Thuế tiểu bang không hợp lệ. Vui lòng nhập lại.\n";
            continue;
        }

        std::cout << "Thuế liên bang: ";
        std::cin >> federalTax;

        if (federalTax < 0 || federalTax > grossPay) {
            std::cout << "Thuế liên bang không hợp lệ. Vui lòng nhập lại.\n";
            continue;
        }

        std::cout << "FICA withholdings: ";
        std::cin >> ficaWithholdings;

        if (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            std::cout << "FICA withholdings không hợp lệ. Vui lòng nhập lại.\n";
            continue;
        }

        if (stateTax + federalTax + ficaWithholdings > grossPay) {
            std::cout << "Tổng thuế vượt quá lương Gross. Vui lòng nhập lại.\n";
            continue;
        }

        double netPay = grossPay - stateTax - federalTax - ficaWithholdings;

        // Cập nhật tổng số liệu
        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        totalNetPay += netPay;
    }

    std::cout << "Báo cáo lương hàng tuần:\n";
    std::cout << "-----------------------------\n";
    std::cout << "Tổng lương Gross: " << totalGrossPay << std::endl;
    std::cout << "Tổng thuế tiểu bang: " << totalStateTax << std::endl;
    std::cout << "Tổng thuế liên bang: " << totalFederalTax << std::endl;
    std::cout << "Tổng FICA withholdings: " << totalFicaWithholdings << std::endl;
    std::cout << "Tổng lương Net: " << totalNetPay << std::endl;

    return 0;
}