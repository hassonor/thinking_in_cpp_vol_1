//
// Created by Or Hasson on 07/02/2024.
//

#include "headers/Stash2Ch6.h"
#include <iostream>
#include <cassert>
#include <filesystem>
#include <fstream>
#include <cstring>

const int INCREMENT = 100;

Stash2Ch6::Stash2Ch6(int _size) {
    size = _size;
    quantity = 0;
    next = 0;
    storage = nullptr;
}

int Stash2Ch6::add(void * element){
    if(next >= quantity ) // Check if Enough space left?
        inflate(INCREMENT);

    // Copy element into storage,
    // starting at next empty space:
    int startBytes = next * size;
    auto* e = (unsigned char*) element;
    for(int i = 0; i < size;i++){
        storage[startBytes + i] = e[i]; // Copy element byte by byte
    }
    next++;
    return (next -1); // Index number
}

void* Stash2Ch6::fetch(int index){
    assert(index >= 0);
    if (index >= next)
        return nullptr; // To indicate the end

    // Produce pointer to desired element:
    return &(storage[index * size]);
}

int Stash2Ch6::count() const {
    return next; // Number of elements in CStash
}

void Stash2Ch6::inflate(int increase) {
    assert(increase > 0);
    int newQuantity = quantity + increase;
    int newBytes = newQuantity* size;
    int oldBytes = quantity * size;
    auto* b = new unsigned char[newBytes];

    for(int i = 0; i < oldBytes; i++){
        b[i] = storage[i]; // Copy old to new
    }

    delete [] (storage); // Remove old Storage
    storage = b; // Point to new memory
    quantity = newQuantity;
}

Stash2Ch6::~Stash2Ch6(){
    if(storage != nullptr) {
        std::cout << "freeing storage" << std::endl;
        delete[] storage;
    }
}

void testStash2Ch6(){
    Stash2Ch6 intStash(sizeof(int));

    for(int i = 0; i < 100; i++){
        intStash.add(&i);
    }

    for(int j = 0; j < intStash.count(); j++){
        std::cout<< "intStash.fetch(" << j << ") = " << *(int* ) intStash.fetch(j) << std::endl;
    }

    const int bufsize = 80;
    Stash2Ch6 stringStash(sizeof(char)* bufsize);

    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_5/StashClassTICPP.cpp");
    std::cout << "Input file path: " << inPath << std::endl;
    std::ifstream in(inPath);


    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    std::string line;
    while(getline(in,line))
        stringStash.add((char*)line.c_str());

    int k = 0;
    char* cp;

    while ((cp = (char*) stringStash.fetch(k++)) != nullptr) {
        std::cout << "stringStash.fetch(" << k << ") = " << cp << std::endl;
    }
}


