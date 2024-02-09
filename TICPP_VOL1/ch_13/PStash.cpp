//
// Created by Or on 2/9/2024.
//

#include "headers/PStash.h"
#include <iostream>
#include <cstring> // 'mem' functions
#include <cassert>
#include <filesystem>
#include <fstream>

PStash::PStash() {
    quantity = 0;
    storage = nullptr;
    next = 0;
}

int PStash::add(void* element) {
    const int inflateSize = 10;
    if (next >= quantity)
        inflate(inflateSize);
    storage[next++] = element;
    return (next - 1); // Index number
}

// No ownership:
PStash::~PStash() {
    for (int i = 0; i < next; i++)
        assert(storage[i] == nullptr);
    delete[] storage;
}

// Operator overloading replacement for fetch
void* PStash::operator[](int index) const {
    assert(index >= 0);
    if (index >= next)
        return nullptr; // To indicate the end
    // Produce pointer to desired element:
    return storage[index];
}

void* PStash::remove(int index) {
    void* v = operator[](index);
    // "Remove" the pointer:
    if (v != nullptr) storage[index] = nullptr;
    return v;
}

void PStash::inflate(int increase) {
    const int psz = sizeof(void*);
    void** st = new void* [quantity + increase];
    memset(st, 0, (quantity + increase) * psz);
    memcpy(st, storage, quantity * psz);
    quantity += increase;
    delete[] storage;  // Old storage
    storage = st; // Point to new memory
}

void testPStash() {
    PStash intStash;

    // 'new' works with built-in types, too. Note
    // the "pseudo-constructor" syntax:
    for (int i = 0; i < 25; i++) {
        intStash.add(new int(i));
    }
    for (int j = 0; j < intStash.count(); j++) {
        std::cout << "intStash[" << j << "] = " << *(int*) intStash[j] << std::endl;
    }

    // Clean up:
    for (int k = 0; k < intStash.count(); k++)
        delete (int*) intStash.remove(k);


    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_13/Tree2Demo.cpp");
    std::cout << "Input file path: " << inPath << std::endl;
    std::ifstream in(inPath);
    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    PStash stringStash;
    std::string line;

    while (getline(in, line))
        stringStash.add(new std::string(line));

    // Print out the strings:
    for (int u = 0; stringStash[u]; u++)
        std::cout << "stringStash[" << u << "] = " << *(std::string*) stringStash[u] << std::endl;

    // Clean up:
    for (int v = 0; v < stringStash.count(); v++)
        delete (std::string*) stringStash.remove(v);
}
