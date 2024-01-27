//
// Created by Or on 1/27/2024.
//

#include "headers/StaticCastTICPP.h"

void func(int) {}

void staticCastDemo() {
    int i = 0x7fff; // Max pos value = 32767
    long l;
    float f;

    // (1) Typical castless conversions:
    l = i;
    f = i;

    // Also works:
    l = static_cast<long>(i);
    f = static_cast<float>(i);

    // (2) Narrowing conversions:
    i = l; // May lost digits
    i = f; // May lost info

    // Says "I know," eliminates warnings:
    i = static_cast<int>(l);
    l = static_cast<int>(f);
    char c = static_cast<char>(i);

    // (3) Forcing a conversion from void* :
    void* vp = &i;
    // Old way produces a DANGEROUS conversion:
    float* fp = (float*) vp;
    // The new way is equally DANGEROUS:
    fp = static_cast<float*>(vp);

    // (4) Implicit type conversions, normally performed by the compiler:
    double d = 0.0;
    int x = d; // Automatic type conversion
    x = static_cast<int>(d); // More explicit
    func(d); // Automatic type conversion
    func(static_cast<int>(d)); // More explicit

}