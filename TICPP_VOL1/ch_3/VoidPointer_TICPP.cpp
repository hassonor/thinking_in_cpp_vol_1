//
// Created by Or on 1/26/2024.
//

#include "headers/VoidPointer_TICPP.h"


void voidPointerDemo() {
    void* vp;
    char c;
    int i;
    float f;
    double d;
    // The address of ANY type can be assigned to a void pointer:
    vp = &c;
    vp = &i;
    vp = &f;
    vp = &d;

    int i2 = 99;
    void* vp2 = &i2;
    // Can't dereference a void pointer:
    // *vp = 3; // Compile-time error
    // Must cast back to int before de-referencing:
    *((int*) vp) = 3;
}