//
// Created by Or on 2/10/2024.
//

#ifndef CPP_PLAYGROUND_2_STRINGSTACK_H
#define CPP_PLAYGROUND_2_STRINGSTACK_H

#include "../../ch_6/headers/StackCh6.h"
#include <string>

class StringStack : public StackCh6 {
public:
    void push(std::string* str);

    std::string* peek() const;

    std::string* pop();

    ~StringStack();
};

void testStringStack();


#endif //CPP_PLAYGROUND_2_STRINGSTACK_H
