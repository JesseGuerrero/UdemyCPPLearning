#include <iostream>
#include <string>

consteval int get_value() {
    return 3;
}

int main() {
    constexpr int value = get_value();
    std::cout <<"value : "<< value << std::endl;

    int value2 {5};
    std::cout <<"value2 : "<< value2 << std::endl;

    std::cerr << "This is a first" << std::endl;

    int num {7};
    std::string string1;
//    std::getline(std::cin, string1);
//    std::cin >> num >> string1;
//    std::cout << num << " is the num! And " << string1 << " is the string!" << std::endl;
    std::clog << "this happened!" << std::endl;


    return 0;
}
