//
// Created by Or on 1/31/2024.
//

#ifndef CPP_PLAYGROUND_2_STASHCLASSTICPP_H
#define CPP_PLAYGROUND_2_STASHCLASSTICPP_H

class StashClass {
    int size; // Size of each space
    int quantity; // Number of storage spaces
    int next; // Next empty space

    // Dynamically allocated array of bytes:
    unsigned char* storage;

    void inflate(int increase);

public:
    void initialize(int size);

    void cleanup();

    int add(const void* element);

    void* fetch(int index) const;

    int count() const;
};

void StashClassTestTICPP();


#endif //CPP_PLAYGROUND_2_STASHCLASSTICPP_H
