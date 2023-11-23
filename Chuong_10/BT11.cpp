#include <iostream>
#include <cstring>
#include <cctype>

bool kiemTraMatKhau(const char* password) {
    int length = strlen(password);


    if (length < 6) {
        std::cout << "Mật khẩu phải dài ít nhất 6 ký tự." << std::endl;
        return false;
    }

    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;

  
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpperCase = true;
        }
        else if (islower(password[i])) {
            hasLowerCase = true;
        }
        else if (isdigit(password[i])) {
            hasDigit = true;
        }
    }

 
    if (!hasUpperCase) {
        std::cout << "Mật khẩu phải có ít nhất một chữ hoa." << std::endl;
        return false;
    }

    if (!hasLowerCase) {
        std::cout << "Mật khẩu phải có ít nhất một chữ thường." << std::endl;
        return false;
    }

    if (!hasDigit) {
        std::cout << "Mật khẩu phải có ít nhất một chữ số." << std::endl;
        return false;
    }

   
    return true;
}

int main() {
    char password[100];

    std::cout << "Nhập mật khẩu: ";
    std::cin.getline(password, 100);

    if (kiemTraMatKhau(password)) {
        std::cout << "Mật khẩu hợp lệ." << std::endl;
    }

    return 0;
}