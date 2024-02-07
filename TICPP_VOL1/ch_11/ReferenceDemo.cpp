//
// Created by Or Hasson on 07/02/2024.
//

#include "headers/ReferenceDemo.h"

int* f2(int* x){
    (*x)++;
    return x; // Safe, x is outside the scope.
}

int& g2(int& x){
    x++; // Same effect as in f()
    return x; // Safe, outsize this scope
}

int &h2(){
    int q;
    //! return q; // Error
    static int x;
    return x; // Safe, x lives outside this scope;
}

void referenceDemoRun(){
    int a = 0;
    f2(&a); // Ugly (but explicit)
    g2(a); // Clean (but hidden)
}