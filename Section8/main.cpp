#include <iostream>
#include <string>
#include <iomanip>

int main() {
    long int d = 15;

    std::cout << std::setprecision(3);
    std::cout << std::showbase << std::hex;
    std::cout << std::setiosflags(std::ios::uppercase);
    std::cout << d << std::endl;
    std::cout << sizeof(d) << std::endl;

    std::string string1 {"hello"};
    std::cout << string1 << std::endl;

    return 0;
}
