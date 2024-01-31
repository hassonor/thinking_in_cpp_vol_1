//
// Created by Or on 1/31/2024.
//

#include <iostream>
#include "headers/ClassDemoTICPP.h"

int A::ff() {
    return i + j + k;
}

void A::gg() {
    i = j = k = 0;
}

// Identical results are produced with:

int B::ff() {
    return i + j + k;
}

void B::gg() {
    i = j = k = 0;
}


void classDemoTest() {
    A a{};
    B b{};
    a.ff();
    a.gg();
    b.ff();
    b.gg();
}