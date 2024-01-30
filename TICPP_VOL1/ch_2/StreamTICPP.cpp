//
// Created by Or on 1/12/2024.
//

#include "headers/StreamTICPP.h"
#include <iostream>

void testStreamTICPP() {
    // Specifying formats with manipulators;
    std::cout << "a number in decimal: " << std::dec << 15 << std::endl;
    std::cout << "in octal: " << std::oct << 15 << std::endl;
    std::cout << "in hex: " << std::hex << 15 << std::endl;
    std::cout << "a floating-point number: " << 3.14159 << std::endl;
    std::cout << "non-printing char (escape): " << char(27) << std::endl;
}
