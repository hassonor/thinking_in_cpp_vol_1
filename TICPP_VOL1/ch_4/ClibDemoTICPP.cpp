//
// Created by Or on 1/28/2024.
//
// Implementation of example C-like library
// Declare structure and functions:

#include "headers/ClibDemoTICPP.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cassert>
#include <filesystem>
#include <cstring>

// Quantity of elements to add
// when increasing storage:
const int INCREMENT = 100;

void initialize(CStash* s, int sz) {
    s->size = sz;
    s->quantity = 0;
    s->storage = nullptr;
    s->next = 0;
}

// Adds an element to the CStash container.
// Params:
// - s: A pointer to the CStash container where the element is to be added.
// - element: A pointer to the element to be added. This is a void pointer because the CStash container is type-agnostic.
int add(CStash* s, const void* element) {
    // Check if there is enough space in the container for the new element.
    // If not, increase the storage size of the container.
    if (s->next >= s->quantity) // If the current number of elements is equal or exceeds the capacity...
        inflate(s, INCREMENT); // ...then increase the storage.

    // Calculate the starting byte position in the storage array where the new element should be copied.
    // This is determined by the index of the next free space (s->next) and the size of each element (s->size).
    int startBytes = s->next * s->size;

    // Cast the element to a pointer of type unsigned char so that we can handle it as raw bytes.
    // This is necessary because CStash is type-agnostic and doesn't know the type of the elements it is storing.
    unsigned char* e = (unsigned char*) element;

    // Copy the new element into the storage.
    // The copying is done byte by byte for the number of bytes equal to the size of one element (s->size).
    for (int i = 0; i < s->size; i++)
        s->storage[startBytes + i] = e[i]; // Copy each byte of the element to the storage.

    // Increment the index of the next free space in the container since we've just added a new element.
    s->next++;

    // Return the index of the new element. The index is one less than s->next because we've already incremented s->next.
    return (s->next - 1);
}

void* fetch(CStash* s, int index) {
    // Check index boundaries:
    assert(0 <= index);
    if (index >= s->next)
        return nullptr; // To indicate the end
    // Produce pointer to desired element
    return &(s->storage[s->size * index]);
}

int count(CStash* s) {
    return s->next; // Elements in CStash
}

void inflate(CStash* s, int increase) {
    assert(increase > 0);
    int newQuantity = s->quantity + increase;
    int newBytes = newQuantity * s->size;
    int oldBytes = s->quantity * s->size;
    unsigned char* temp = new unsigned char[newBytes];

    for (int i = 0; i < oldBytes; i++)
        temp[i] = s->storage[i]; // copy old to new

    delete[] (s->storage); // Old storage
    s->storage = temp; // Point to new memory
    s->quantity = newQuantity;
}

void cleanup(CStash* s) {
    if (s->storage != nullptr) {
        std::cout << "freeing storage" << std::endl;
        delete[]s->storage;
    }
}

void CLibTestTICPP() {
    // Define variables at the beginning
    // of the block, as in C
    CStash intStash, stringStash;
    int i;
    char* cp;
    std::string line;
    const int bufsize = 80;
    std::filesystem::path inPath;
    std::ifstream in;

    // Now remember to initialize the variables:
    initialize(&intStash, sizeof(int));

    for (i = 0; i < 100; i++)
        add(&intStash, &i);

    for (i = 0; i < count(&intStash); i++)
        std::cout << "fetch(&intStash, " << i << ") = " << *(int*) fetch(&intStash, i) << std::endl;

    // Holds 80-character
    initialize(&stringStash, sizeof(char) * bufsize);

    inPath = std::filesystem::absolute("../TICPP_VOL1/ch_4/ClibDemoTICPP.cpp");
    std::cout << "Input file path: " << inPath << std::endl;

    in.open(inPath);
    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }
    while (getline(in, line))
        add(&stringStash, line.c_str());
    i = 0;
    while ((cp = (char*) fetch(&stringStash, i++)) != nullptr)
        std::cout << "fetch(&stringStash, " << i << ") = " << cp << std::endl;
    cleanup(&intStash);
    cleanup(&stringStash);
}



