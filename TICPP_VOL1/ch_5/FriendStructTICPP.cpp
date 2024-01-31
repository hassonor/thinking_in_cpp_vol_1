//
// Created by Or on 1/31/2024.
//

#include "headers/FriendStructTICPP.h"

void X_F::initialize() {
    i = 0;
}

void g(X_F* x, int i) {
    x->i = i;
}

void Y::f(X_F* x) {
    x->i = 47;
}

void Z::initialize() {
    j = 99;
}

void Z::g(X_F* x) {
    x->i += j;
}

void h() {
    X_F x;
    x.i = 100; // Direct data manipulation
}

void friendStructDemo() {
    X_F x{};
    Z z{};
    z.g(&x);
}