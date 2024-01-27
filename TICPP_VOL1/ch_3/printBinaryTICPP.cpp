//
// Created by Or on 1/27/2024.
//

#include "headers/printBinaryTICPP.h"
#include <iostream>

void printBinaryDemo(const unsigned char val) {
    for (int i = 7; i >= 0; i--) {
        if (val & (1 << i))
            std::cout << "1";
        else
            std::cout << "0";
    }
}