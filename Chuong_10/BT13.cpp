#include <iostream>
#include <string>
#include <cctype>

std::string chuyenCau(const std::string& input) {
    std::string output;

    
    if (input.empty()) {
        return output;
    }

    
    output += toupper(input[0]);

    
    for (size_t i = 1; i < input.length(); i++) {
       
        if (isupper(input[i])) {
          
            output += ' ';
            output += tolower(input[i]);
        }
        else {
           
            output += input[i];
        }
    }

    return output;
}

int main() {
    std::string input;

    std::cout << "Nhập câu: ";
    std::getline(std::cin, input);

    std::string output = chuyenCau(input);

    std::cout << "Câu sau khi chuyển đổi: " << output << std::endl;

    return 0;
}