#include <iostream>

class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    TestScores(double s1, double s2, double s3)
        : score1(s1), score2(s2), score3(s3) {}

    double getScore1() const {
        return score1;
    }

    double getScore2() const {
        return score2;
    }

    double getScore3() const {
        return score3;
    }

    void setScore1(double s1) {
        score1 = s1;
    }

    void setScore2(double s2) {
        score2 = s2;
    }

    void setScore3(double s3) {
        score3 = s3;
    }

    double calculateAverage() const {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    double score1, score2, score3;

   
    std::cout << "Nhập điểm kiểm tra 1: ";
    std::cin >> score1;
    std::cout << "Nhập điểm kiểm tra 2: ";
    std::cin >> score2;
    std::cout << "Nhập điểm kiểm tra 3: ";
    std::cin >> score3;

    
    TestScores testScores(score1, score2, score3);

    std::cout << "Điểm trung bình: " << testScores.calculateAverage() << std::endl;

    return 0;
}