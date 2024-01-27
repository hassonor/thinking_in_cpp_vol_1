//
// Created by Or on 1/26/2024.
//

#include "headers/PassByValueTICPP.h"
#include <iostream>

void f(int a) {
    std::cout << "a = " << a << std::endl;
    a = 5;
    std::cout << "a = " << a << std::endl;
}

void passByValueDemo() {
    int x = 47;
    std::cout << "**************passByValueDemo***************" << std::endl;
    std::cout << "x = " << x << std::endl;
    f(x);
    std::cout << "x = " << x << std::endl;
}