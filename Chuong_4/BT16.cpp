#include <iostream>
#include <string>

struct Achievement {
    double height;
    std::string date;
    double prizeMoney;
};

void validateHeight(double height) {
    if (height < 2.0 || height > 5.0) {
        std::cout << "Chiều cao phải nằm trong khoảng từ 2.0 đến 5.0 (m)." << std::endl;
        exit(0);
    }
}

void sortAchievements(Achievement achievements[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (achievements[j].height > achievements[i].height) {
                Achievement temp = achievements[i];
                achievements[i] = achievements[j];
                achievements[j] = temp;
            }
        }
    }
}

int main() {
    const int numAchievements = 3;
    Achievement achievements[numAchievements];

    for (int i = 0; i < numAchievements; i++) {
        std::cout << "Nhập chiều cao (m) của thành tích thứ " << i + 1 << ": ";
        std::cin >> achievements[i].height;

        validateHeight(achievements[i].height);

        std::cout << "Nhập ngày tháng xây dựng thành tích " << i + 1 << ": ";
        std::cin >> achievements[i].date;

        std::cout << "Nhập khoản tiền chi trả (USD) cho thành tích " << i + 1 << ": $";
        std::cin >> achievements[i].prizeMoney;
    }

    sortAchievements(achievements, numAchievements);

    std::cout << "Các thành tích tốt nhất của vận động viên theo thứ tự chiều cao là:" << std::endl;
    for (int i = 0; i < numAchievements; i++) {
        std::cout << "Thành tích " << i + 1 << ":" << std::endl;
        std::cout << "Chiều cao: " << achievements[i].height << "m" << std::endl;
        std::cout << "Ngày tháng: " << achievements[i].date << std::endl;
        std::cout << "Khoản tiền chi trả: $" << achievements[i].prizeMoney << std::endl;
        std::cout << std::endl;
    }

    return 0;
}