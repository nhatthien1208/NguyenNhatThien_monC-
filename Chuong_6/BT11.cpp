#include <iostream>

const int NUM_SCORES = 5;

void getScore(int& score)
{
    do {
        std::cout << "Nhập điểm kiểm tra: ";
        std::cin >> score;

        if (score < 0 || score > 100) {
            std::cout << "Điểm không hợp lệ. Vui lòng nhập lại!" << std::endl;
        }
    } while (score < 0 || score > 100);
}

int findLowest(int scores[])
{
    int lowest = scores[0];
    for (int i = 1; i < NUM_SCORES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

void calcAverage(int scores[])
{
    int lowest = findLowest(scores);
    int sum = 0;
    int count = 0;

    for (int i = 0; i < NUM_SCORES; i++) {
        if (scores[i] != lowest) {
            sum += scores[i];
            count++;
        }
    }

    double average = static_cast<double>(sum) / count;

    std::cout << "Điểm trung bình sau khi giảm điểm thấp nhất: " << average << std::endl;
}

int main()
{
    int scores[NUM_SCORES];

    for (int i = 0; i < NUM_SCORES; i++) {
        getScore(scores[i]);
    }

    calcAverage(scores);

    return 0;
}