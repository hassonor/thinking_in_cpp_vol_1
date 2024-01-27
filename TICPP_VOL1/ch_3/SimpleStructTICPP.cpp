//
// Created by Or on 1/27/2024.
//

#include "headers/SimpleStructTICPP.h"


struct Structure1 {
    char c;
    int i;
    float f;
    double d;
};

typedef struct {
    char c;
    int i;
    float f;
    double d;

} Structre2;


// Allowing a struct to refer to itself
typedef struct SelfReferential {
    int i;
    SelfReferential* sr;
} SelfReferential;


void simpleStructDemo() {
    // In C, you can't just say Structure1 when you
    // are defining variables, you must say struct Structure1
    // This is where typedef becomes especially handy in C (See Structure2)
    struct Structure1 s1, s2;

    s1.c = 'a'; // Select an element using a '.'
    s1.i = 1;
    s1.f = 3.14;
    s1.d = 0.00093;

    s2.c = 'a';
    s2.i = 1;
    s2.f = 3.14;
    s2.d = 0.00093;

    Structre2 s3, s4;
    s3.c = 'a';
    s3.i = 1;
    s3.f = 3.14;
    s3.d = 0.00093;

    s4.c = 'a';
    s4.i = 1;
    s4.f = 3.14;
    s4.d = 0.00093;

    // SelfReferential Demo
    SelfReferential sr1, sr2;
    sr1.sr = &sr2;
    sr2.sr = &sr1;
    sr1.i = 47;
    sr2.i = 1024;


    // Using Pointer to struct - need to use "->" instead "." for access to field
    Structre2 s12, s22;
    Structre2* sp12 = &s12;
    sp12->c = 'a';
    sp12->i = 1;
    sp12->f = 3.14;
    sp12->d = 0.00093;
    sp12 = &s22; // Point to a different struct object
    sp12->c = 'a';
    sp12->i = 1;
    sp12->f = 3.14;
    sp12->d = 0.00093;

}