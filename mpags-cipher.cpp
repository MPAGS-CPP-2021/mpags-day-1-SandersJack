#include <iostream>
#include <string>
int main() {
    /* Getting Experience
     Author: Jack Sanders
     File created: 08/10/21 */
    int a{4};
    const double d{5.5};
    std::string msg{"a is a int and d is a double"};
    a = 60;
    std::cout << a << std::endl;
    std::cout << d << std::endl;
    std::cout << msg << std::endl;
    /* error from adding d=9.0:
    mpags-cipher.cpp: In function ‘int main()’:
    mpags-cipher.cpp:9:9: error: assignment of read-only variable ‘d’
     d = 9.0; */
    return 0;
}