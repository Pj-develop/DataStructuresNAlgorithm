#include <iostream>
#include <string>

std::string encryptString(std::string str, int n) {
    std::string encryptedString = "";

    for (char c : str) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char encryptedChar = ((c - base + n) % 26 + 26) % 26 + base;
            encryptedString += encryptedChar;
        } else {
            encryptedString += c+n;
        }
    }
    
    return encryptedString;
}

int main() {
    std::string message;
    int encryptionKey;

 
    std::getline(std::cin, message);


    std::cin >> encryptionKey;

    std::string encryptedMessage = encryptString(message, encryptionKey);

    std::cout <<encryptedMessage << std::endl;

    return 0;
}
