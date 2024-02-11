//
// Created by Or on 2/11/2024.
//

#ifndef CPP_PLAYGROUND_2_BYTE2_H
#define CPP_PLAYGROUND_2_BYTE2_H

#include "ByteDemo.h"

class Byte2 : public ByteCh14 {
public:
    // Constructors don't inherit:
    Byte2(unsigned char bb = 0);

    // operator= does not inherit, but
    // is synthesized for member wise assignment.
    // However, only the same type = SameType
    // operator= is synthesized, so you have to make the other explicitly:
    Byte2& operator=(const ByteCh14& right);

    Byte2& operator=(int i);
};

#endif //CPP_PLAYGROUND_2_BYTE2_H
