//
// Created by Or on 1/12/2024.
//

#include "headers/Stream_TICPP.h"
#include <iostream>
using namespace std;

void testStream_TICPP() {
    // Specifying formats with manipulators;
    cout << "a number in decimal: " << dec << 15 << endl;
    cout << "in octal: " << oct << 15 << endl;
    cout << "in hex: " << hex << 15 << endl;
    cout << "a floating-point number: " << 3.14159 << endl;
    cout << "non-printing char (escape): " << char(27) <<endl;
}
