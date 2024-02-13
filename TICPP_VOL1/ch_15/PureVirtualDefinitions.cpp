//
// Created by Or on 2/13/2024.
//

#include <iostream>
#include "headers/PureVirtualDefinitions.h"

class PetI {
public:
    virtual void speak() const = 0;

    virtual void eat() const = 0;
    // Inline pure virtual definitions illegal:
    //! virtual void sleep() const = 0 {}
};

void PetI::eat() const {
    std::cout << "PetI::eat()" << std::endl;
}

void PetI::speak() const {
    std::cout << "PetI::speak()" << std::endl;
}

class DogI : public PetI {
public:
    // Use the common Pet code:
    void speak() const { PetI::speak(); }

    void eat() const { PetI::eat(); }
};


void testPureVirtualDefinitions() {
    DogI simba;
    simba.speak();
    simba.eat();
}