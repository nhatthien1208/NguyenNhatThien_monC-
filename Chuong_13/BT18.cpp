#include <iostream>
#include <string>

class Question {
private:
    std::string question;
    std::string answer1;
    std::string answer2;
    std::string answer3;
    std::string answer4;
    int correctAnswer;

public:
    Question(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, int correct)
        : question(q), answer1(a1), answer2(a2), answer3(a3), answer4(a4), correctAnswer(correct) {}

    std::string getQuestion() const {
        return question;
    }

    std::string getAnswer1() const {
        return answer1;
    }

    std::string getAnswer2() const {
        return answer2;
    }

    std::string getAnswer3() const {
        return answer3;
    }

    std::string getAnswer4() const {
        return answer4;
    }

    int getCorrectAnswer() const {
        return correctAnswer;
    }
};

int main() {
    Question questions[10] = {
        Question("Câu hỏi 1", "Đáp án 1", "Đáp án 2", "Đáp án 3", "Đáp án 4", 1),
        Question("Câu hỏi 2", "Đáp án 1", "Đáp án 2", "Đáp án 3", "Đáp án 4", 2),
        Question("Câu hỏi 3", "Đáp án 1", "Đáp án 2", "Đáp án 3", "Đáp án 4", 3),
        
    };

    int player1Score = 0;
    int player2Score = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Người chơi 1 - Câu hỏi " << (i + 1) << ": " << questions[i].getQuestion() << std::endl;
        std::cout << "1. " << questions[i].getAnswer1() << std::endl;
        std::cout << "2. " << questions[i].getAnswer2() << std::endl;
        std::cout << "3. " << questions[i].getAnswer3() << std::endl;
        std::cout << "4. " << questions[i].getAnswer4() << std::endl;
        std::cout << "Chọn câu trả lời (1-4): ";

        int player1Answer;
        std::cin >> player1Answer;

        if (player1Answer == questions[i].getCorrectAnswer()) {
            player1Score++;
        }

        std::cout << std::endl;

        std::cout << "Người chơi 2 - Câu hỏi " << (i + 1) << ": " << questions[i].getQuestion() << std::endl;
        std::cout << "1. " << questions[i].getAnswer1() << std::endl;
        std::cout << "2. " << questions[i].getAnswer2() << std::endl;
        std::cout << "3. " << questions[i].getAnswer3() << std::endl;
        std::cout << "4. " << questions[i].getAnswer4() << std::endl;
        std::cout << "Chọn câu trả lời (1-4): ";

        int player2Answer;
        std::cin >> player2Answer;

        if (player2Answer == questions[i].getCorrectAnswer()) {
            player2Score++;
        }

        std::cout << std::endl;
    }

    std::cout << "Số điểm người chơi 1: " << player1Score << std::endl;
    std::cout << "Số điểm người chơi 2: " << player2Score << std::endl;

    if (player1Score > player2Score) {
        std::cout << "Người chơi 1 chiến thắng!" << std::endl;
    }
    else if (player1Score < player2Score) {
        std::cout << "Người chơi 2Tiếp tục phần còn lại của chương trình:

            ```cpp
            std::cout << "Người chơi 2 chiến thắng!" << std::endl;
    }
    else {
        std::cout << "Hòa!" << std::endl;
    }

    return 0;
}