#include <iostream>
#include <map>
#include <string>
#include <cctype>

std::string convertToMorse(char c) {
    std::map<char, std::string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."},
        {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
        {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
        {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."},
        {' ', " "}, {'.', ".-.-.-"}, {',', "--..--"}, {'?', "..--.."}, {'!', "-.-.--"}
    };

    char uppercaseChar = std::toupper(c);
    if (morseCode.count(uppercaseChar) > 0) {
        return morseCode[uppercaseChar];
    }

    return "";
}

std::string convertToMorseString(const std::string& text) {
    std::string morseString;
    for (char c : text) {
        std::string morseChar = convertToMorse(c);
        if (!morseChar.empty()) {
            morseString += morseChar + " ";
        }
    }
    return morseString;
}

int main() {
    std::string input;
    std::cout << "Nhập chuỗi: ";
    std::getline(std::cin, input);

    std::string morseString = convertToMorseString(input);
    std::cout << "Chuỗi Mã Morse: " << morseString << std::endl;

    return 0;
}