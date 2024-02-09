//
// Created by Or on 2/8/2024.
//

#include "headers/MallocClassDemo.h"
#include <cassert>
#include <cstdlib> // malloc() & free()
#include <cstring> // memset()
#include <iostream>

class ObjM {
    int i, j, k;
    enum {
        sz = 100
    };
    char buf[sz];
public:
    void initalize() { // Can't use constructor
        std::cout << "Initializing ObjM" << std::endl;
        i = j = k = 0;
        memset(buf, 0, sz);
    }

    void destroy() const { // Can't use destructor
        std::cout << "destroying ObjM" << std::endl;
    }
};

void testObjMDemo() {
    ObjM* objM = (ObjM*) malloc(sizeof(ObjM));
    assert(objM != nullptr);
    objM->initalize();
    //... sometime later:
    objM->destroy();
    free(objM);
}