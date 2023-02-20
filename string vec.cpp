#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main () {
    std::string phrase;
    std::cout << "Enter a word: ";
    std::cin >> phrase; 
    
    int stringIndex;
    std::cout << "Enter an ordinal value within that word: ";
    std::cin >> stringIndex;
    std::cout << "Letter " << stringIndex << " of your word is '" << phrase[stringIndex - 1] << "';\n";
    
    char newChar;
    std::cout << "Enter a new character for that letter: ";
    std::cin >> newChar;
    
    phrase[stringIndex - 1] = newChar;
    
    std::cout << "Now the word is: \""<< phrase << "\" and the word has " << phrase.length() << " characters.\n";
    
    std::string name;
    std::cout << "Enter your name: ";'\n';
    std::cin.ignore();
    std::getline(std::cin, name); 
    
    std::cout << "Your name is: " << name << '\n';
    
    int intArray[4];
    
    std::cout << "Enter 4 int values: ";
    for (int i = 0; i < 4; i++) {
    std::cin >> intArray[i];
    }
    
    int avgIndex[2];
    std::cout << "Enter two vector indices to average over: ";
    for (int i = 0; i < 2; i++) {
    std:: cin >> avgIndex[i];
    }
 
    double avg = static_cast<double>(intArray[avgIndex[0]] + intArray[avgIndex[1]]) / 2;

    std::cout << "The averge of " << intArray[avgIndex[0]] << " and " << intArray[avgIndex[1]] << " is " << avg << '\n';
}
