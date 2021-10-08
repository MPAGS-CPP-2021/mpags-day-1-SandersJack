#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

int main(int argc, char* argv[]) {

    const std::vector<std::string> cmdLineArgs { argv, argv+argc};
    for (int i{0}; i<cmdLineArgs.size(); i++) {
        std::cout << cmdLineArgs[i] << std::endl;
    }
    // Take each letter from user input:
    char in_char('x');
    while(std::cin >> in_char) {
        // Take in_char and converts it to upper case
        // Change numbers to letters
        char u_char{};
        if (isalpha(in_char) > 0){
        switch(in_char) {
            case '0':
            u_char = 'A';
            break;
            case '1':
            u_char = 'B';
            break;
            case '2':
            u_char = 'C';
            break;
            case '3':
            u_char = 'D';
            break;
            case '4':
            u_char = 'E';
            break;
            case '5':
            u_char = 'F';
            break;
            case '6':
            u_char = 'G';
            break;
            case '7':
            u_char = 'H';
            break;
            case '8':
            u_char = 'I';
            break;
            case '9':
            u_char = 'J';
            default:
            u_char = toupper(in_char);
            break;
        }
        std::cout << u_char <<std::endl;
        }
        
    }


}