//
// Created by Or on 2/17/2024.
//

#include "headers/DynamicCast.h"
#include <iostream>

class dcPet {
public:
    virtual ~dcPet() {}
};

class dcDog : public dcPet {
};

class dcCat : public dcPet {
};

void testDynamicCast() {
    dcPet* b = new dcCat; // Upcast

    // Try to cast it to dcDog*:
    dcDog* d1 = dynamic_cast<dcDog*>(b); // Invalid results.

    // Try to cast it to dcCat*:
    dcCat* d2 = dynamic_cast<dcCat*>(b);

    std::cout << "d1 = " << (long long) d1 << std::endl;
    std::cout << "d2 = " << (long long) d2 << std::endl;
}