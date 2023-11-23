#include <iostream>
#include <cstring>

void chuoiVietHoa(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }
}

void chuoiVietThuong(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
    }
}

void daoNguocChuoi(char* str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    std::cout << "Nhập chuỗi: ";
    std::cin.getline(str, 100);

    daoNguocChuoi(str);
    chuoiVietThuong(str);
    chuoiVietHoa(str);

    std::cout << "Chuỗi sau khi đảo ngược, chuyển thành chữ thường và chữ hoa: " << str << std::endl;

    return 0;
}