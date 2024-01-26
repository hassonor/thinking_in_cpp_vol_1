//
// Created by Or on 1/26/2024.
//

#include "headers/PassByAddress_TICPP.h"
#include <iostream>

void f(int* p) {
    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *p << std::endl;

    *p = 5;
    std::cout << "*p = " << *p << std::endl;
}

void passByAddressDemo() {
    int x = 47;
    std::cout << "**************" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;
    f(&x);
    std::cout << "x = " << x << std::endl;
}