#include <iostream>

int main() {

    int a = 5;
    int b = ++a * --a;
    std::cout << b << std::endl;

    int c = ++a * (--a + 4);
    std::cout << c << std::endl;

    return 0;
}