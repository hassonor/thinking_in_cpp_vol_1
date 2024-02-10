//
// Created by Or on 2/10/2024.
//
// Hiding overloaded names during inheritance

#include "headers/NameHiding.h"
#include <iostream>

class BaseCh14 {
public:
    int ff() const {
        std::cout << "BaseCh14::f()\n";
        return 1;
    }

    int ff(std::string) const {
        return 1;
    }
};

class Derived1 : public BaseCh14 {
public:
    void gg() {};
};

class Derived2 : public BaseCh14 {
public:
    // Redefinition:
    int ff() const {
        std::cout << "Derived2::f()\n";
        return 2;
    }
};

class Derived3 : public BaseCh14 {
public:
    // Change return type:
    void ff() const { std::cout << "Derived3::f()\n"; }
};

class Derived4 : public BaseCh14 {
public:
    // Change argument list:
    int ff(int) const {
        std::cout << "Derived4::f()\n";
        return 4;
    }
};

void testNameHiding() {
    std::string s("hello");

    Derived1 d1;
    int x = d1.ff();
    d1.ff(s);

    Derived2 d2;
    x = d2.ff();
    //! d2.ff(s); string version is hidden

    Derived3 d3;
    d3.ff();
    //! x = df.ff(); // return int version is hidden

    Derived4 d4;
    //! x = df.ff(); // ff() version is hidden
    x = d4.ff(1);
}







































