//
// Created by Or on 1/12/2024.
//

#include "headers/IntVectorTICPP.h"
#include <iostream>
#include <vector>

// Creating a vector that holds integers
void testIntVectorTICPP() {
    std::vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;

    for (int i = 0; i < v.size(); i++) {
        v[i] = v[i] * 10; // Assignment
    }

    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
}
