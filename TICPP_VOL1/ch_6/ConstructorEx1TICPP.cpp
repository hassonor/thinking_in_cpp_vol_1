//
// Created by Or on 2/5/2024.
//

#include "headers/ConstructorEx1TICPP.h"
#include <iostream>

Tree::Tree(int _height) {
    height = _height;
}

Tree::~Tree() {
    std::cout << "inside Tree destructor" << std::endl;
    printsize();
}

void Tree::grow(int years) {
    height += years;
}

void Tree::printsize() {
    std::cout << "Tree height is " << height << std::endl;
}

void treeClassDemo() {
    std::cout << "before opening brace" << std::endl;
    {
        Tree t(12);
        std::cout << "after Tree creation" << std::endl;
        t.printsize();
        t.grow(7);
        std::cout << "before closing brace" << std::endl;
    }
    std::cout << "after closing brace" << std::endl;
}


