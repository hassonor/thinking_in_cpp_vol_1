//
// Created by Or Hasson on 07/02/2024.
//

#ifndef CPP_PLAYGROUND_2_STASH2CH6_H
#define CPP_PLAYGROUND_2_STASH2CH6_H


class Stash2Ch6 {
    int size; // Size of each space
    int quantity; // Number of storage spaces
    int next; // Next empty space

    // Dynamically allocated array of bytes:
    unsigned char* storage;
    void inflate(int increase);
public:
    Stash2Ch6(int size);
    ~Stash2Ch6();
    int add(void* element);
    void* fetch(int index);
    int count() const;
};

void testStash2Ch6();


#endif //CPP_PLAYGROUND_2_STASH2CH6_H
