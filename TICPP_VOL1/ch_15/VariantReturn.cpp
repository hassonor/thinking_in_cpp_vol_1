//
// Created by Or on 2/15/2024.
//
// Returning a pointer or reference to a derived
// type during overriding

#include "headers/VariantReturn.h"
#include <iostream>
#include <string>

class PetIIIFood {
public:
    virtual std::string foodType() const = 0;
};

class PetIII {
public:
    virtual std::string type() const = 0;

    virtual PetIIIFood* eats() = 0;
};

class BirdIII : public PetIII {
public:
    std::string type() const { return "BirdIII"; }

    class BirdIIIFood : public PetIIIFood {
    public:
        std::string foodType() const {
            return "Bird Food";
        }
    };

    // Upcast to base type:
    PetIIIFood* eats() { return &bf; }

private:
    BirdIIIFood bf;
};

class CatIII : public PetIII {
public:
    std::string type() const { return "CatIII"; }

    class CatIIIFood : public PetIIIFood {
    public:
        std::string foodType() const { return "Cat Food"; }
    };

    // Return exact type instead:
    CatIIIFood* eats() { return &cf; }

private:
    CatIIIFood cf;
};


void testVariantReturn() {
    BirdIII b;
    CatIII c;
    PetIII* p[] = {&b, &c};
    for (int i = 0; i < sizeof(p) / sizeof(*p); i++) {
        std::cout << p[i]->type() << " eats " << p[i]->eats()->foodType() << std::endl;
    }

    // Can return the exact type:
    CatIII::CatIIIFood* cf = c.eats();
    BirdIII::BirdIIIFood* bf;
    // Cannot return the exact type:
    //! bf = b.eats();
    // Must downcast:
    bf = dynamic_cast<BirdIII::BirdIIIFood*>(b.eats());

}