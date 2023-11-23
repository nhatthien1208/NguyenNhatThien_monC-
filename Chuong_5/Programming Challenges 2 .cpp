#include <iostream>

int main() {
    int count = 0;

    for (int i = 0; i <= 127; i++) {
        std::cout << static_cast<char>(i) << " ";
        count++;

        if (count == 16) {
            std::cout << std::endl;
            count = 0;
        }
    }

    return 0;
}