//
// Created by Or on 2/11/2024.
//

#ifndef CPP_PLAYGROUND_2_BYTEDEMO_H
#define CPP_PLAYGROUND_2_BYTEDEMO_H

#include <iostream>

class ByteCh14 {
    unsigned char b;
public:
    ByteCh14(unsigned char bb = 0);

    const ByteCh14 operator+(const ByteCh14& right) const;

    const ByteCh14 operator-(const ByteCh14& right) const;

    const ByteCh14 operator*(const ByteCh14& right) const;

    const ByteCh14 operator/(const ByteCh14& right) const;

    const ByteCh14 operator%(const ByteCh14& right) const;

    const ByteCh14 operator^(const ByteCh14& right) const;

    const ByteCh14 operator&(const ByteCh14& right) const;

    const ByteCh14 operator|(const ByteCh14& right) const;

    const ByteCh14 operator<<(const ByteCh14& right) const;

    const ByteCh14 operator>>(const ByteCh14& right) const;

    ByteCh14& operator=(const ByteCh14& right);

    ByteCh14& operator+=(const ByteCh14& right);

    ByteCh14& operator-=(const ByteCh14& right);

    ByteCh14& operator*=(const ByteCh14& right);

    ByteCh14& operator/=(const ByteCh14& right);

    ByteCh14& operator%=(const ByteCh14& right);

    ByteCh14& operator^=(const ByteCh14& right);

    ByteCh14& operator&=(const ByteCh14& right);

    ByteCh14& operator|=(const ByteCh14& right);

    ByteCh14& operator>>=(const ByteCh14& right);

    ByteCh14& operator<<=(const ByteCh14& right);

    int operator==(const ByteCh14& right) const;

    int operator!=(const ByteCh14& right) const;

    int operator<(const ByteCh14& right) const;

    int operator>(const ByteCh14& right) const;

    int operator<=(const ByteCh14& right) const;

    int operator>=(const ByteCh14& right) const;

    int operator&&(const ByteCh14& right) const;

    int operator||(const ByteCh14& right) const;

    void print(std::ostream& os) const;
};

// Declare operator<< for ByteCh14 to print its content via std::ostream
std::ostream& operator<<(std::ostream& os, const ByteCh14& byte);

void testByteDemo();


#endif //CPP_PLAYGROUND_2_BYTEDEMO_H
