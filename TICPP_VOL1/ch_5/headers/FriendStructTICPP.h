//
// Created by Or on 1/31/2024.
//

#ifndef CPP_PLAYGROUND_2_FRIENDSTRUCTTICPP_H
#define CPP_PLAYGROUND_2_FRIENDSTRUCTTICPP_H

struct X_F;

struct Y {
    void f(X_F*);
};

struct X_F {
private:
    int i;
public:
    void initialize();

    friend void g(X_F*, int); // Global friend
    friend void Y::f(X_F*); // Struct member friend
    friend struct Z; // Entire struct is a friend
    friend void h();
};

struct Z {
private:
    int j;
public:
    void initialize();

    void g(X_F* x);
};

void g(X_F* x, int i);

void friendStructDemo();


#endif //CPP_PLAYGROUND_2_FRIENDSTRUCTTICPP_H
