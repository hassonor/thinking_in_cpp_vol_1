//
// Created by Or on 2/17/2024.
//

#include "headers/OperatorPolymorphism.h"


#include <iostream>

using namespace std;

class Matrix;

class Scalar;

class Vector;

class Math {
public:
    virtual Math& operator*(Math& rv) = 0;

    virtual Math& multiply(Matrix*) = 0;

    virtual Math& multiply(Scalar*) = 0;

    virtual Math& multiply(Vector*) = 0;


    virtual ~Math() {}
};

class Matrix : public Math {
public:
    Math& operator*(Math& rv) override {
        return rv.multiply(this); // 2nd dispatch
    }

    Math& multiply(Matrix*) override {
        cout << "Matrix * Matrix" << endl;
        return *this;
    }


    Math& multiply(Scalar*) override {
        cout << "Scalar * Matrix" << endl;
        return *this;
    }

    Math& multiply(Vector*) override {
        cout << "Vector * Matrix" << endl;
        return *this;
    }
};

class Scalar : public Math {
public:
    Math& operator*(Math& rv) override {
        return rv.multiply(this); //2nd dispatch;
    }

    Math& multiply(Matrix*) override {
        cout << "Matrix * Scalar" << endl;
        return *this;
    }

    Math& multiply(Scalar*) override {
        cout << "Scalar * Scalar" << endl;
        return *this;
    }

    Math& multiply(Vector*) override {
        cout << "Vector * Scalar" << endl;
        return *this;
    }
};

class Vector : public Math {
public:
    Math& operator*(Math& rv) override {
        return rv.multiply(this); // 2nd dispatch
    }

    Math& multiply(Matrix*) override {
        cout << "Matrix * Vector" << endl;
        return *this;
    }

    Math& multiply(Scalar*) override {
        cout << "Scalar * Vector" << endl;
        return *this;
    }

    Math& multiply(Vector*) override {
        cout << "Vector * Vector" << endl;
        return *this;
    }
};

void testOperatorPolymorphism() {
    Matrix m;
    Vector v;
    Scalar s;
    Math* math[] = {&m, &v, &s};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Math& m1 = *math[i];
            Math& m2 = *math[j];
            m1 * m2;
        }
    }
}
