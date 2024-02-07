//
// Created by Or Hasson on 07/02/2024.
//

#include "headers/FreeStandingReferences.h"
#include <iostream>

void FreeStandingReferencesDemo(){
    // Ordinary free-standing reference:
    int y;
    int& r = y;

    // When a reference is created, it must
    // be initialized to a live object.
    // However, you can also say:
    const int& q = 12;

    // References are tied to someone else's storage:
    int x = 0;
    int&a = x;

    std::cout << "x = " << x << " , a = " << a << std::endl;
    a++;
    std::cout << "x = " << x << " , a = " << a << std::endl;
}

/*
 *  Rules when using references:
 *  1. A reference must be initialized when it is created. (Pointers can be initialized at any time)
 *  2. One a reference is initialized to an object, it cannot be changed to refer to another object.
 *  (Pointers can be pointed to another object at any time).
 *  3. You cannot have NULL references.
 *  You must always be able to assume that a reference is connected to a legitimate piece of storage
 *
 */