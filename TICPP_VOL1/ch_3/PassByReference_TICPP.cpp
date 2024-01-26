//
// Created by Or on 1/26/2024.
//

#include "headers/PassByReference_TICPP.h"
#include <iostream>

void f(int& r) {
    std::cout << "r = " << r << std::endl;
    std::cout << "&r = " << &r << std::endl;
    r = 5;
    std::cout << "r = " << r << std::endl;
}

void passByReferenceDemo() {
    int x = 77;
    std::cout << "**************passByReferenceDemo***************" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;

    f(x); // Look like pass-by-value, is actually pass by reference
    std::cout << "x = " << x << std::endl;
}