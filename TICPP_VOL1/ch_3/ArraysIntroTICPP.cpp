//
// Created by Or on 1/27/2024.
//

#include "headers/ArraysIntroTICPP.h"
#include <iostream>

using namespace std;

void arraysIntroDemoTICPP() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = i * 10;
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << "sizeof(int) = " << sizeof(int) << endl;

    for (int i = 0; i < 10; i++) {
        cout << "&a[" << i << "] = " << &a[i] << endl;
    }

    // Same Address a and &a[0]
    cout << "**************************" << endl;
    cout << "Same Addresses a and &a[0]" << endl;
    cout << "a = " << a << endl;
    cout << "&a[0] = " << &a[0] << endl;

    // PointersAndBrackets
    int b[10];
    int* ip = b;

    for (int i = 0; i < 10; i++) {
        ip[i] = i * 10;
    }

    // An array of struct
    typedef struct {
        int i, j, k;
    } ThreeDPoint;

    ThreeDPoint p[10];
    for (int i = 0; i < 10; i++) {
        p[i].i = i + 1;
        p[i].j = i + 2;
        p[i].k = i + 3;
    }
}