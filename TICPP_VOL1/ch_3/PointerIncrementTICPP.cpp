//
// Created by Or on 1/27/2024.
//

#include "headers/PointerIncrementTICPP.h"
#include <iostream>

void pointerIncrementDemo1() {
    int i[10];
    double d[10];
    int* ip = i;
    double* dp = d;

    std::cout << "ip = " << ip << std::endl;
    ip++;
    std::cout << "ip = " << ip << std::endl;

    std::cout << "dp = " << dp << std::endl;
    dp++;
    std::cout << "dp = " << dp << std::endl;
    std::cout << "************************" << std::endl;
}

typedef struct {
    char c; // 1 byte
    short s; // 2 byte
    int i; // 4 bytes
    long l; // 8 bytes
    float f; // 4 bytes
    double d; // 8 bytes
    long double ld; // 8 bytes
} Primitives;

void pointerIncrementDemo2() {
    Primitives p[10];
    Primitives* pp = p;

    std::cout << "sizeof(Primitives) = " << sizeof(Primitives) << std::endl;
    
    std::cout << "pp = " << pp << std::endl;
    pp++;
    std::cout << "pp = " << pp << std::endl;
    std::cout << "************************" << std::endl;
}