//
// Created by emil on 12/16/22.
//

#include <iostream>

int main() {
    int i = 1;
    int product = 1;
    while (i != 10) {
        product *= i;
        ++i;
    }

    std::cout << product;

    return 0;
}

