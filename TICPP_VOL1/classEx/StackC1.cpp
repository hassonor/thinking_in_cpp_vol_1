//
// Created by Or on 2/10/2024.
//

#include <iostream>
#include "headers/StackC1.h"


StackC1::StackC1() {
    _maxsize = 10;
    _size = 0;
    _data = new int[_maxsize];
}

bool StackC1::isEmpty() {
    return this->_size == 0;
}

void StackC1::push(int value) {
    if (_size < _maxsize) {
        _data[_size++] = value;
    } else {
        _maxsize += 20;
        int* temp = new int[_maxsize];
        for (int i = 0; i < _size; i++)
            temp[i] = _data[i];
        temp[_size++] = value;
        delete[] _data;
        _data = temp;
    }

}

void StackC1::print() {
    std::cout << "print StackC1" << std::endl;
}

void SecureStackC1::print() {
    std::cout << "print SecureStackC1" << std::endl;
}

StackC1::~StackC1() {
    delete[] _data;
}


void testStackC1() {
    StackC1 s1;
    s1.print();
    SecureStackC1 s3;
    StackC1* sptr;
    sptr = &s3;
    sptr->print();
    StackC1* s2 = new StackC1();
    delete s2;
}