//
// Created by Or Hasson on 07/02/2024.
//

#include "headers/MultiArgsDemo.h"
#include <iostream>

Z2::Z2(int _i, int _j) {
    i = _i;
    j = _j;
}

void Z2::print() {
    std::cout << "i = " << i << ", j = " << j <<std::endl;
}


void testMultiArgs(){
    Z2 zz[] = {Z2(1,2),Z2(3,4),Z2(5,6),Z2(7,8)};
    for(int i = 0; sizeof zz / sizeof *zz; i++){
        zz[i].print();
    }
}