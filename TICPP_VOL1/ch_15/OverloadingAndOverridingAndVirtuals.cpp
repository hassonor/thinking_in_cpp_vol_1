//
// Created by Or on 2/14/2024.
//

#include "headers/OverloadingAndOverridingAndVirtuals.h"
#include <iostream>
#include <string>

class BaseI {
public:
    virtual int f() const {
        std::cout << "BaseI::f()\n";
        return 1;
    }

    virtual void f(std::string) const {}

    virtual void g() const {}
};

class Derived1I : public BaseI {
public:
    void g() const {};
};

class Derived2I : public BaseI {
public:
    // Overriding a virtual function:
    int f() const {
        std::cout << "Derived2I::f()\n";
        return 2;
    }
};

class Derived3I : public BaseI {
public:
    // Cannot change return type:
    //! void f() const { std::cout << "Derived3I::f()\n"; }
};

class Derived4I : public BaseI {
public:
    // Change argument list:
    int f(int) const {
        std::cout << "Derived4I::f()\n";
        return 4;
    }
};

void overloadingAndOverridingAndVirtualsDemo() {
    std::string s("hello");
    Derived1I d1;
    int x = d1.f();
    d1.f(s);

    Derived2I d2;
    x = d2.f();
    //! d2.f(s); // string version hidden

    Derived4I d4;
    x = d4.f(1);
    //! x = d4.f(); // f() version hidden
    //! d4.f(s); // string version hidden

    BaseI& br = d4; // Upcast
    //! br.f(1); // Derived version unavailable

    br.f(); // Base version available
    br.f(s); // Base version available
}