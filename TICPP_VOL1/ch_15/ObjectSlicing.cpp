//
// Created by Or on 2/14/2024.
//

#include "headers/ObjectSlicing.h"
#include <iostream>
#include <string>


class PetIII {
    std::string pname;
public:
    PetIII(const std::string& name) : pname(name) {}

    virtual std::string name() const { return pname; }

    virtual std::string description() const {
        return "This is " + pname;
    }
};

class DogIII : public PetIII {
    std::string favoriteActivity;
public:
    DogIII(const std::string& name, const std::string& activity)
            : PetIII(name), favoriteActivity(activity) {}

    std::string description() const {
        return PetIII::name() + " likes to " +
               favoriteActivity;
    }
};

void describe(PetIII p) { // Slices the object
    std::cout << p.description() << std::endl;
}


void objectSlicingDemo() {
    PetIII p("Tutti");
    DogIII d("Pistuk", "sleep");
    describe(p);
    describe(d);
}