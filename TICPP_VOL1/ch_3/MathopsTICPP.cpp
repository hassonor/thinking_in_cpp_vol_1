//
// Created by Or on 1/26/2024.
//

#include "headers/MathopsTICPP.h"
#include <iostream>

// A macro to display a string and a value.
#define PRINT(STR, VAR) \
    std::cout << STR " = " << VAR << std::endl;

void mathOpsDemo() {
    int i, j, k;
    float u, v, w; // Applies to doubles,too

    std::cout << "enter an integer:";
    std::cin >> j;

    std::cout << "enter another integer: ";
    std::cin >> k;

    PRINT("j", j);
    PRINT("k", k);
    i = j + k;
    PRINT("j + k", i);
    i = j - k;
    PRINT("j - k", i);
    i = k / j;
    PRINT("k / j", i);
    i = k * j;
    PRINT("k * j", i);
    i = k % j;
    PRINT("k % j", i);

    // The following only works with integers:
    j %= k;
    PRINT("j %= k", j);

    std::cout << "Enter a floating-point number:";
    std::cin >> v;

    std::cout << "Enter another floating-point number:";
    std::cin >> w;

    PRINT("v", v);
    PRINT("w", w);
    u = v + w;
    PRINT("v + w", u);
    u = v - w;
    PRINT("v - w", u);
    u = v * w;
    PRINT("v * w", u);
    u = v / w;
    PRINT("v / w", u);

    // The following works for ints,chars and doubles too:
    PRINT("u", u);
    PRINT("v", v);

    u += v;
    PRINT("u += v", u);
    u -= v;
    PRINT("u -= v", u);
    u *= v;
    PRINT("u *= v", u);
    u /= v;
    PRINT("u /= v", u);
}
