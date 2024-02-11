//
// Created by Or on 2/11/2024.
//

#include "headers/PrivateInheritance.h"

class PetCh14 {
public:
    char eat() const { return 'a'; }

    int speak() const { return 2; }

    float sleep() const { return 3.0; }

    float sleep(int) const { return 4.0; }
};

class GoldFishCh14 : PetCh14 { // Private inheritance
public:
    using PetCh14::eat;  // Name publicizes member
    using PetCh14::sleep; // Both overloaded members exposed
};

void testPrivateInheritance() {
    GoldFishCh14 bob;
    bob.eat();
    bob.sleep();
    bob.sleep(1);
    //! bob.speak(); // Error: private member function
}