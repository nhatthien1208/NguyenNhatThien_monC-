#include <iostream>

int main() {
    int numYears;
    double totalRainfall = 0.0;
    int numMonths = 0;

    std::cout << "Nhập số năm: ";
    std::cin >> numYears;

    while (numYears < 1) {
        std::cout << "Số năm không hợp lệ. Vui lòng nhập số năm lớn hơn 0: ";
        std::cin >> numYears;
    }

    for (int year = 1; year <= numYears; year++) {
        for (int month = 1; month <= 12; month++) {
            double rainfall;

            std::cout << "Nhập lượng mưa (inch) cho tháng " << month << " năm " << year << ": ";
            std::cin >> rainfall;

            while (rainfall < 0) {
                std::cout << "Lượng mưa không hợp lệ. Vui lòng nhập lượng mưa không âm: ";
                std::cin >> rainfall;
            }

            totalRainfall += rainfall;
            numMonths++;
        }
    }

    double averageRainfall = totalRainfall / numMonths;

    std::cout << "Số tháng: " << numMonths << "\n";
    std::cout << "Tổng lượng mưa (inch): " << totalRainfall << "\n";
    std::cout << "Lượng mưa trung bình mỗi tháng: " << averageRainfall << " inch\n";

    return 0;
}