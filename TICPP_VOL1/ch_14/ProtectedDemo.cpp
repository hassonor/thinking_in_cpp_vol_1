//
// Created by Or on 2/11/2024.
//

#include "headers/ProtectedDemo.h"

class BaseCh14 {
    int i;
protected:
    int read() const { return i; }

    void set(int ii) { i = ii; }

public:
    BaseCh14(int ii = 0) : i(ii) {}

    int value(int m) const { return m * i; }
};

class DerivedCh14 : public BaseCh14 {
    int j;
public:
    DerivedCh14(int jj = 0) : j(jj) {}

    void change(int x) { set(x); }
};


void protectedExampleDemo() {
    DerivedCh14 d;
    d.change(10);
}