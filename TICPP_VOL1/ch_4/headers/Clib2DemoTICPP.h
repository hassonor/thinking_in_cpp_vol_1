//
// Created by Or on 1/29/2024.
//
// C-Like library converted to C++

#ifndef CPP_PLAYGROUND_2_CLIB2DEMOTICPP_H
#define CPP_PLAYGROUND_2_CLIB2DEMOTICPP_H

struct Stash {
    int size; // Size of each space
    int quantity; // number of storage spaces
    int next; // Next empty space

    // Dynamically allocated array of bytes:
    unsigned char* storage;

    // Functions
    void initialize(int size);

    void cleanup();

    int add(const void* element);

    void* fetch(int index) const;

    int count() const;

    void inflate(int increase);
};

void CLib2TestTICPP();


#endif //CPP_PLAYGROUND_2_CLIB2DEMOTICPP_H
