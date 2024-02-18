//
// Created by Or on 2/18/2024.
//

#include "headers/StaticHierarchyNavigation.h"
#include <iostream>
#include <typeinfo>

class scShape {
public:
    virtual ~scShape() {};
};

class scCircle : public scShape {

};

class scSquare : public scShape {

};

class scOther {
};


void testStaticHierarchyNavigation() {
    scCircle c;
    scShape* s = &c; // Upcast: normal and OK

    // More explicit but unnecessary:
    s = static_cast<scShape*>(&c);

    // (Since upcasting is such a safe and common
    // operation, the cast becomes cluttering)
    scCircle* cp = nullptr;
    scSquare* sp = nullptr;

    // Static Navigation of class hierarchies
    // requires extra type information:
    if (typeid(s) == typeid(cp))
        cp = static_cast<scCircle*>(s);
    if (typeid(s) == typeid(sp))
        sp = static_cast<scSquare*>(s);
    if (cp != nullptr)
        std::cout << "It's a circle!" << std::endl;
    if (sp != nullptr)
        std::cout << "It's a square!" << std::endl;

    // Static navigation is ONLY an efficiency hack;
    // dynamic_cast is always safer. However:
    // scOther* op = static_cast<scOther*>(s);
    // Conveniently gives an error message, while scOther* op2 = (scOther*)s; does not
}