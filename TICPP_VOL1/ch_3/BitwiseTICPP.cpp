//
// Created by Or on 1/27/2024.
//

#include "headers/BitwiseTICPP.h"
#include "headers/printBinaryTICPP.h"
#include <iostream>

using namespace std;

// A macro to save typing:
#define PR(STR, EXPR) \
 cout << STR; printBinaryDemo(EXPR); cout << endl;

void bitwiseDemoTICPP() {
    unsigned int getval;
    unsigned char a, b;

    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    a = getval;
    PR("a in binary: ", a);

    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    b = getval;
    PR("b in binary: ", b);

    PR("a | b = ", a | b);
    PR("a & b = ", a & b);
    PR("a ^ b = ", a ^ b);
    PR("~a = ", ~a);
    PR("~b = ", ~b);

    // An interesting bit pattern:
    unsigned char c = 0x5A;
    PR("c in binary: ", c);
    a |= c;
    PR("a |= c; a = ", a);
    b &= c;
    PR("b &= c; b = ", b);
    b ^= a;
    PR("b ^= a; b = ", b);
}

unsigned char bitsRotationLeft(unsigned char val) {
    int highbit;

    if (val & 0x80) // 0x80 is the high bit only
        highbit = 1;
    else
        highbit = 0;

    // Left shift (bottom bit becomes 0):
    val <<= 1;
    // Rotate the high bit onto the bottom:
    val |= highbit;
    return val;
}

unsigned char bitsRotationRight(unsigned char val) {
    int lowbit;

    if (val & 1) // Check the low bit
        lowbit = 1;
    else
        lowbit = 0;

    val >>= 1; // Right shift by one position
    // Rotate the low bit onto the top:
    val |= (lowbit << 7);
    return val;

}