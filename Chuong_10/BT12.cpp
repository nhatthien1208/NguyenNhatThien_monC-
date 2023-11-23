#include <iostream>
#include <sstream>

std::string inNgay(const std::string& input) {
    std::string output;

 
    std::stringstream ss(input);

    int month, day, year;
    char delimiter;

    
    ss >> month >> delimiter >> day >> delimiter >> year;

    if (ss.fail() || delimiter != '/' || ss.peek() != EOF) {
        output = "Ngày không hợp lệ.";
    }
    else {
      
        if (month < 1 || month > 12 || day < 1 || day > 31) {
            output = "Ngày không hợp lệ.";
        }
        else {
           
            std::string monthNames[] = {
                "không có", "tháng 1", "tháng 2", "tháng 3", "tháng 4",
                "tháng 5", "tháng 6", "tháng 7", "tháng 8", "tháng 9",
                "tháng 10", "tháng 11", "tháng 12"
            };

            output = std::to_string(day) + " " + monthNames[month] + " năm " + std::to_string(year);
        }
    }

    return output;
}

int main() {
    std::string input;

    std::cout << "Nhập ngày (mm/dd/yyyy): ";
    std::cin >> input;

    std::string output = inNgay(input);

    std::cout << "Ngày: " << output << std::endl;

    return 0;
}