//
// Created by Or on 2/14/2024.
//
// Adding virtuals in derivation

#include "headers/AddingVirtuals.h"
#include <iostream>

class PetII {
    std::string pname;
public:
    PetII(const std::string& petName) : pname(petName) {}

    virtual std::string name() const { return pname; }

    virtual std::string speak() const { return "PetII speak"; }
};

class DogII : public PetII {
    std::string name;
public:
    DogII(const std::string& petName) : PetII(petName) {}

    // New virtual function in the DogII class:
    std::string sit() const {
        return PetII::name() + " sits";
    }

    std::string speak() const { // Override PetII's speak
        return PetII::name() + " says 'Bark!'";
    }
};

void testAddingVirtuals() {
    PetII* p[] = {new PetII("generic"), new DogII("Pistuk"), new DogII("Lili")};

    std::cout << "p[0]->speak() = " << p[0]->speak() << std::endl;
    std::cout << "p[1]->speak() = " << p[1]->speak() << std::endl;
    //! std::cout << "p[1]->speak() = " << p[1]->sit() << std::endl; // Illegal
    std::cout << "p[1]->speak() = " << ((DogII*) p[1])->sit() << std::endl;
}
