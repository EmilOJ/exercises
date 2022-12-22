//
// Created by emil on 12/16/22.
//

#include <iostream>

int main() {
    std::cout << "Enter first number: ";
    int num1;
    std::cin >> num1;

    std::cout << "Enter second number: ";
    int num2;
    std::cin >> num2;

    if (num1 > num2) {
        std::cout << num1 << " > " << num2;
    } else {
        std::cout << num1 << " <= " << num2;
    }

    return 0;
}

