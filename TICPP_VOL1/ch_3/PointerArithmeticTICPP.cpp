//
// Created by Or on 1/27/2024.
//

#include "headers/PointerArithmeticTICPP.h"
#include <iostream>

using namespace std;

#define P(EX) cout << #EX << ": " << EX << endl;

void pointerArithmeticDemo() {
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = i; // Give it index values
    int* ip = a;
    P(*ip);
    P(*++ip);
    P(*(ip + 5));

    int* ip2 = ip + 5;
    P(*ip2);
    P(*(ip2 - 4));
    P(*--ip2);
    P(*ip);
    P(*ip2);
    P(ip2 - ip); // Yields number of elements
}