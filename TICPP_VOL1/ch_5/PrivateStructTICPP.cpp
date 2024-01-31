//
// Created by Or on 1/31/2024.
//

#include "headers/PrivateStructTICPP.h"


void B_PublicAndPrivateStructDemo::func() {
    i = 0;
    j = '0';
    f = 0.0;
}

void testPublicAndPrivateStruct() {
    B_PublicAndPrivateStructDemo b{};

    b.i = 1; // OK, public

    //! b.j = '1'; // Illegal, private
    //! b.f = 1.0; // Illegal, private
}