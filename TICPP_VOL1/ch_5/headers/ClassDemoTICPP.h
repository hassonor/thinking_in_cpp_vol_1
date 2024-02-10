//
// Created by Or on 1/31/2024.
//
// Similarity of struct and classEx

#ifndef CPP_PLAYGROUND_2_CLASSDEMOTICPP_H
#define CPP_PLAYGROUND_2_CLASSDEMOTICPP_H


struct A {
private:
    int i, j, k;
public:
    int ff();

    void gg();
};

// Identical results are produces with:
class B {
    int i, j, k;
public:
    int ff();

    void gg();
};

void classDemoTest();


#endif //CPP_PLAYGROUND_2_CLASSDEMOTICPP_H
