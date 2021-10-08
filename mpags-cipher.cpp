#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

int main(int argc, char* argv[]) {

    const std::vector<std::string> cmdLineArgs { argv, argv+argc};
    char hflag{0};
    for (int i{0}; i<argc; i++) {
        std::string check{cmdLineArgs[i]};
            if (check == "-h") {
                hflag = 1; // Kills th program if asked for help
                std::cout << "Usage: ./mpags-cipher [options] file .." <<std::endl;
                std::cout << "Options:" << std::endl;
                std::cout << "  --help    Display this information" <<std::endl;
            } else if (check == "--help") {
                hflag = 1;
                std::cout << "Usage: ./mpags-cipher [options] file .." <<std::endl;
                std::cout << "Options:" << std::endl;
                std::cout << "  --help    Display this information" <<std::endl; 
            }
        std::cout << cmdLineArgs[i] << std::endl;
    }
    // Take each letter from user input:
    char in_char('x');
    if (hflag == 0) {
    while(std::cin >> in_char) {
        // Take in_char and converts it to upper case
        // Change numbers to letters
        char u_char{'o'};
        std::string num{""};
        if (isalpha(in_char) == 0){
        switch(in_char) {
            case '0':
            num = "ZERO";
            break;
            case '1':
            num = "ONE";
            break;
            case '2':
            num = "TWO";
            break;
            case '3':
            num = "THREE";
            break;
            case '4':
            num = "FOUR";
            break;
            case '5':
            num = "FIVE";
            break;
            case '6':
            num = "SIX";
            break;
            case '7':
            num = "SEVEN";
            break;
            case '8':
            num = "EIGHT";
            break;
            case '9':
            num = "NINE";
            default:
            break;
        }
        std::cout << num << std::endl;
        } else {
            u_char = toupper(in_char);
            std::cout << u_char <<std::endl;
        }
    }
    }

}