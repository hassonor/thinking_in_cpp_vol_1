//
// Created by Or on 2/16/2024.
//

#include "headers/VirtualDestructors.h"
#include <iostream>

class BaseV {
public:
    ~BaseV() { std::cout << "~BaseV()\n"; }
};

class DerivedV : public BaseV {
public:
    ~DerivedV() { std::cout << "~DerivedV()\n"; }
};

class Base2V {
public:
    virtual ~Base2V() { std::cout << "~Base2V()\n"; }
};

class Derived2V : public Base2V {
public:
    ~Derived2V() { std::cout << "~Derived2V()\n"; }
};


void virtualDestructorsDemo() {
    BaseV* bp = new DerivedV; // Upcast
    delete bp;

    Base2V* bp2 = new Derived2V; // Upcast
    delete bp2;
}