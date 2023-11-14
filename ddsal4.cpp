#include <iostream>
#include <string>

int countWords(const std::string &input) {
    int wordCount = 0;
    bool inWord = false;

    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (c == ' ' || c == '\t' || c == '\n') {
            if (inWord) {
                inWord = false;
                wordCount++;
            }
        } else {
            inWord = true;
        }
    }

    if (inWord) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int wordCount = countWords(input);
    std::cout << "Count of words: " << wordCount << std::endl;

    return 0;
}

