#include <iostream>
#include <string>
int main() {
    /* Getting Experience
     Author: Jack Sanders
     File created: 08/10/21 */
    int a{4};
    int b{11};
    const double d{0.7};
    std::string msg{"a is a int and d is a double"};
    std::string text{"Good Morning"};
    char fix = text[5];
    a = 70;
    std::cout << fix << std::endl;
    std::cout << a << std::endl;
    std::cout << d << std::endl;
    std::cout << a*d << std::endl;
    std::cout << d/a << std::endl;
    std::cout << a/b << std::endl;
    /* Dividing an int by and int produces an int but 
    if it produces a decimal value it rounds to a int */
    std::cout << msg << std::endl;
    /* error from adding d=9.0:
    mpags-cipher.cpp: In function ‘int main()’:
    mpags-cipher.cpp:9:9: error: assignment of read-only variable ‘d’
     d = 9.0; */
    return 0;
}