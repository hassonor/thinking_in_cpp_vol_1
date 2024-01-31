//
// Created by Or on 1/31/2024.
//

#include "headers/NestedFriendTICPP.h"
#include <cstring>
#include <iostream>

const int sz = 20;


void Holder::initialize() {
    memset(a, 0, sz * sizeof(int));
}

void Holder::Pointer::initialize(Holder* _h) {
    h = _h;
    p = _h->a;
}

void Holder::Pointer::next() {
    if (p < &(h->a[sz - 1])) p++;
}

void Holder::Pointer::previous() {
    if (p > &(h->a[0])) p--;
}

void Holder::Pointer::top() {
    p = &(h->a[0]);
}

void Holder::Pointer::end() {
    p = &(h->a[sz - 1]);
}

int Holder::Pointer::read() {
    return *p;
}

void Holder::Pointer::set(int i) {
    *p = i;
}

void testNestedFriendDemo() {
    Holder h{};
    Holder::Pointer hp{}, hp2{};
    int i;

    h.initialize();
    hp.initialize(&h);
    hp2.initialize(&h);

    for (i = 0; i < sz; i++) {
        hp.set(i);
        hp.next();
    }

    hp.top();
    hp2.end();
    for (i = 0; i < sz; i++) {
        std::cout << "hp = " << hp.read() << ", hp2 = " << hp2.read() << std::endl;
        hp.next();
        hp2.previous();
    }
}

