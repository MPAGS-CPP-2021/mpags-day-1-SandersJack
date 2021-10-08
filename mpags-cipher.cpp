#include <iostream>
int main() {
    /* Getting Experience
     Author: Jack Sanders
     File created: 08/10/21 */
     int a{4};
     double d{5.5};
     a = 90;
     d = 67.5;
     std::cout << a << std::endl;
     std::cout << d << std::endl;
     /* Doing int e{d}; produces error:
        warning: narrowing conversion of ‘d’ from ‘double’ to ‘int’ inside { } [-Wnarrowing]
      int e{d}; */
}