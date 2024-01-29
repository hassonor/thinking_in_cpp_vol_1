//
// Created by Or on 1/29/2024.
//
// C library converted to C++
// Declare structure and functions:

#include "headers/Clib2DemoTICPP.h"
#include <iostream>
#include <cassert>
#include <filesystem>
#include <fstream>
#include <cstring>

// Quantity of elements to add
// when increasing storage:
const int INCREMENT = 100;

void Stash::initialize(int _size) {
    size = _size;
    quantity = 0;
    storage = nullptr;
    next = 0;
}

int Stash::add(const void* element) {
    if (next >= quantity)  // Enough space left?
        inflate(INCREMENT);

    // Copy element into storage
    // starting at next empty space:
    int startBytes = next * size;
    unsigned char* e = (unsigned char*) element;
    for (int i = 0; i < size; i++)
        storage[startBytes + i] = e[i];

    next++;
    return (next - 1); // Index number
}

void* Stash::fetch(int index) const {
    // Check index boundaries:
    assert(0 <= index);
    if (index >= next)
        return nullptr; // To indicate the end

    // Produce pointer to desired element:
    return &(storage[index * size]);
}

void Stash::inflate(int increase) {
    assert(increase > 0);
    int newQuantity = quantity + INCREMENT;
    int newBytes = newQuantity * size;
    int oldBytes = quantity * size;
    unsigned char* temp = new unsigned char[newBytes];

    for (int i = 0; i < oldBytes; i++) {
        temp[i] = storage[i]; // Copy old to new
    }

    delete[] storage; // Delete old storage

    storage = temp; // Point to new memory
    quantity = newQuantity;
}

void Stash::cleanup() {
    if (storage != nullptr) {
        std::cout << "freeing storage" << std::endl;
        delete[] storage;
    }
}

int Stash::count() const {
    return next; // Number of elements in CStash
}


void CLib2TestTICPP() {
    Stash intStash;
    intStash.initialize(sizeof(int));

    for (int i = 0; i < 100; i++) {
        intStash.add(&i);
    }
    for (int j = 0; j < intStash.count(); j++)
        std::cout << "intStash.fetch(" << j << ") = " << *(int*) intStash.fetch(j) << std::endl;

    // Holds 80-character strings:
    Stash stringStash;
    const int bufsize = 80;
    stringStash.initialize(sizeof(char) * bufsize);
    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_4/Clib2DemoTICPP.cpp");
    std::cout << "Input file path: " << inPath << std::endl;

    std::ifstream in(inPath);

    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    std::string line;
    while (getline(in, line))
        stringStash.add(line.c_str());

    int k = 0;
    char* cp;
    while ((cp = (char*) stringStash.fetch(k++)) != nullptr) {
        std::cout << "stringStash.fetch(" << k << ") = " << cp << std::endl;
    }

    intStash.cleanup();
    stringStash.cleanup();
}





