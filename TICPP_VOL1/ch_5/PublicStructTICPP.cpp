//
// Created by Or on 1/31/2024.
//

#include "headers/PublicStructTICPP.h"


void A_PublicStructDemo::func() {}

void B_PublicStructDemo::func() {}

void testPublicStruct() {
    A_PublicStructDemo a{};
    B_PublicStructDemo b{};

    a.i = b.i = 1;
    a.j = b.j = 'c';
    a.f = b.f = 3.14159;
    a.func();
    b.func();
}