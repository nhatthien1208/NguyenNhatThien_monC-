#include <iostream>

const int NUM_JUDGES = 5;

void getJudgeData(double& score)
{
    do {
        std::cout << "Nhập điểm của giám khảo: ";
        std::cin >> score;

        if (score < 0 || score > 10) {
            std::cout << "Điểm không hợp lệ. Vui lòng nhập lại!" << std::endl;
        }
    } while (score < 0 || score > 10);
}

int findLowest(double scores[])
{
    double lowest = scores[0];
    for (int i = 1; i < NUM_JUDGES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

int findHighest(double scores[])
{
    double highest = scores[0];
    for (int i = 1; i < NUM_JUDGES; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

void calcScore(double scores[])
{
    double lowest = findLowest(scores);
    double highest = findHighest(scores);
    double sum = 0;
    int count = 0;

    for (int i = 0; i < NUM_JUDGES; i++) {
        if (scores[i] != lowest && scores[i] != highest) {
            sum += scores[i];
            count++;
        }
    }

    double average = sum / count;

    std::cout << "Điểm cuối cùng của thí sinh: " << average << std::endl;
}

int main()
{
    double scores[NUM_JUDGES];

    for (int i = 0; i < NUM_JUDGES; i++) {
        getJudgeData(scores[i]);
    }

    calcScore(scores);

    return 0;
}