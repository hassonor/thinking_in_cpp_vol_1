//
// Created by Or on 1/30/2024.
//

#include "headers/SizeOfStructTICPP.h"
#include "headers/ClibDemoTICPP.h"
#include "headers/Clib2DemoTICPP.h"
#include <iostream>

struct A {
    int i[100];
};

struct B {
    void f();
};

void B::f() {}

void sizeOfStructDemo() {
    std::cout << "sizeof struct A = " << sizeof(A) << " bytes" << std::endl;
    std::cout << "sizeof struct B = " << sizeof(B) << " bytes" << std::endl;
    std::cout << "sizeof CStash in C = " << sizeof(CStash) << " bytes" << std::endl;
    std::cout << "sizeof Stash in C++ = " << sizeof(Stash) << " bytes" << std::endl;
}