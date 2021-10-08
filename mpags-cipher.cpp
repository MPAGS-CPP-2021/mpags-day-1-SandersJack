#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
#include<string.h>

int main(int argc, char* argv[]) {

    const std::vector<std::string> cmdLineArgs { argv, argv+argc};
    // Used for checking if flags have been used
    char hflag{0};
    char iflag{0};
    char oflag{0};
    char check_iflag{0};
    char check_oflag{0};
    // Intialising file name strings
    std::string i_filename{};
    std::string o_filename{};
    // Intialising size of strings
    int i_size{};
    int o_size{};
    for (int i{0}; i<argc; i++) {
        std::string check{cmdLineArgs[i]};
            if (check == "-h") {
                hflag = 1; // Kills th program if asked for help
                std::cout << "Usage: ./mpags-cipher [options] file .." <<std::endl;
                std::cout << "Options:" << std::endl;
                std::cout << "  -i    Set input file" <<std::endl;
                std::cout << "  -o    Set output file " <<std::endl;
                std::cout << "  --version    Display the code version" <<std::endl;
                std::cout << "  --help    Display this information" <<std::endl;
            } else if (check == "--help") {
                hflag = 1;
                std::cout << "Usage: ./mpags-cipher [options] file .." <<std::endl;
                std::cout << "Options:" << std::endl;
                std::cout << "  -i    Set input file" <<std::endl;
                std::cout << "  -o    Set output file " <<std::endl;
                std::cout << "  --version    Display the code version" <<std::endl;
                std::cout << "  -h    Display this information" <<std::endl; 
            } else if (check == "--version") {
                std::cout << "mpags-cipher version 0.1.0" << std::endl;
            } else if (cmdLineArgs[i-1] == "-i") {
                i_filename =  check;
                i_size = i_filename.size();
                if (i_filename[i_size-1] == 't' && i_filename[i_size-2] == 'x' && i_filename[i_size-3] == 't' && i_filename[i_size-4] == '.' ){
                    iflag = 1;
                } else {
                    check_iflag = 1;
                    std::cout << "Wrong input file format, needs to be .txt" <<std::endl;
                }
            } else if (cmdLineArgs[i-1] == "-o") {
                o_filename =  check;
                o_size = o_filename.size();
                if (o_filename[o_size-1] == 't' && o_filename[o_size-2] == 'x' && o_filename[o_size-3] == 't' && o_filename[o_size-4] == '.' ){
                oflag = 1;
            } else {
                check_oflag = 1;
                std::cout << "Wrong output file format, needs to be .txt" <<std::endl;
            }
            }
            
            
        //std::cout << cmdLineArgs[i] << std::endl;
    }
    if (oflag == 0 && check_oflag == 0) {
        std::cout << "No declared output file!" << std::endl;
    } else if (iflag == 0 && check_iflag == 0) {
        std::cout << "No declared Input file!" << std::endl;
    }
    // Take each letter from user input:
    char in_char('x');
    if (hflag == 0 && iflag ==1 && oflag ==1) {
        std::string u_char{};
    while(std::cin >> in_char) {
        // Take in_char and converts it to upper case
        // Change numbers to letters
        
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
        u_char += num;
        } else {
            u_char += toupper(in_char);
            
        }
    }
    std::cout << u_char <<std::endl;
    }

}