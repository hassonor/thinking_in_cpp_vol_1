//
// Created by Or on 1/27/2024.
//

#include "headers/PointerToFunctionTICPP.h"
#include <iostream>

void func() {
    std::cout << "func() called..." << std::endl;
}

// Defining and using a pointer to a function
void PointerToFunctionDemo() {
    void (* fp)(); // Define a function pointer (return void and get no arguments)
    fp = func; // Initialize it
    (*fp)(); // Dereferencing calls the function (invoke)

    void (* fp2)() = func; // Define and initialize
    (*fp2)();
}