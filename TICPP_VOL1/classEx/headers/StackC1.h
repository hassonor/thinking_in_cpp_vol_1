//
// Created by Or on 2/10/2024.
//

#ifndef CPP_PLAYGROUND_2_STACKC1_H
#define CPP_PLAYGROUND_2_STACKC1_H


class StackC1 {
    int* _data;
    int _size;
    int _maxsize;
public:
    StackC1();

    void push(int);

    int pop();

    bool isEmpty();

    ~StackC1();
};

void testStackC1();


#endif //CPP_PLAYGROUND_2_STACKC1_H
