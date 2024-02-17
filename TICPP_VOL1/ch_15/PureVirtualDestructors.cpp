//
// Created by Or on 2/16/2024.
//

#include "headers/PureVirtualDestructors.h"
#include <iostream>

class Pet_2 {
public:
    virtual ~Pet_2() = 0;
};

Pet_2::~Pet_2() {
    std::cout << "~Pet_2()" << std::endl;
}

class Dog_2 : public Pet_2 {
public:
    ~Dog_2() {
        std::cout << "~Dog_2()" << std::endl;
    }
};


void pureVirtualDestructorsDemo() {
    Pet_2* p = new Dog_2(); // Upcast
    delete p;
}