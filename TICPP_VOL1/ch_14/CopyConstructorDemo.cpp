//
// Created by Or on 2/11/2024.
//

#include "headers/CopyConstructorDemo.h"
#include <iostream>

class ParentCh14 {
    int i;
public:
    ParentCh14(int ii) : i(ii) {
        std::cout << "ParentCh14(int ii)\n";
    }

    ParentCh14(const ParentCh14& b) : i(b.i) {
        std::cout << "ParentCh14(const ParentCh14&)\n";
    }

    ParentCh14() : i(0) { std::cout << "ParentCh14()\n"; }

    friend std::ostream& operator<<(std::ostream& os, const ParentCh14& b) {
        return os << "ParentCh14: " << b.i << std::endl;
    }
};

class MemberCh14 {
    int i;
public:
    MemberCh14(int ii) : i(ii) {
        std::cout << "MemberCh14(int ii)\n";
    }

    MemberCh14(const MemberCh14& m) : i(m.i) {
        std::cout << "MemberCh14(const MemberCh14&)\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const MemberCh14& m) {
        return os << "MemberCh14: " << m.i << std::endl;
    }
};

class ChildCh14 : public ParentCh14 {
    int i;
    MemberCh14 m;
public:
    ChildCh14(int ii) : ParentCh14(ii), i(ii), m(ii) {
        std::cout << "ChildCh14(int ii)\n";
    }

    ChildCh14(const ChildCh14& c)
            : ParentCh14(c), i(c.i), m(c.m) {
        std::cout << "ChildCh14(ChildCh14&)\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const ChildCh14& c) {
        return os << (ParentCh14&) c << c.m << "ChildCh14: " << c.i << std::endl;
    }
};

void testCCUpCastingDemo() {
    ChildCh14 c(2);
    std::cout << "calling copy-constructor: " << std::endl;
    const ChildCh14& c2 = c; // Calls copy-constructor
    std::cout << "values in c2:\n" << c2;
}