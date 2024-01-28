//
// Created by Or on 1/28/2024.
//
// Header file for a C-like library
// An array-like entity created at runtime

#ifndef CPP_PLAYGROUND_2_CLIBDEMOTICPP_H
#define CPP_PLAYGROUND_2_CLIBDEMOTICPP_H

typedef struct CStashTag {
    int size;   // Size of each space
    int quantity; // Number of storage spaces
    int next; // Next empty space
    // Dynamically allocated array of bytes:
    unsigned char* storage;
} CStash;

void initialize(CStash* s, int size);

void cleanup(CStash* s);

int add(CStash* s, const void* element);

void* fetch(CStash* s, int index);

int count(CStash* s);

void inflate(CStash* s, int increase);

void CLibTestTICPP();


#endif //CPP_PLAYGROUND_2_CLIBDEMOTICPP_H
