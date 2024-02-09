//
// Created by Or on 2/8/2024.
//

#include "headers/Tree2Demo.h"
#include <iostream>

Tree2::Tree2(int treeHeight) : height(treeHeight) {}

Tree2::~Tree2() { std::cout << "*"; }

std::ostream& operator<<(std::ostream& os, const Tree2* t) {
    return os << "Tree2 height is: " << std::dec << t->height << std::endl;
}

void tree2Demo() {
    auto* t = new Tree2(40);
    std::cout << t;
    delete t;
}