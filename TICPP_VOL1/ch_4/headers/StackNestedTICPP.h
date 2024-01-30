//
// Created by Or on 1/30/2024.
//

#ifndef CPP_PLAYGROUND_2_STACKNESTEDTICPP_H
#define CPP_PLAYGROUND_2_STACKNESTEDTICPP_H

struct Stack_Nested {
    struct Link {
        void* data;
        Link* next;

        void initialize(void* _data, Link* _next);
    } * head;

    void initialize();

    void push(void* _data);

    void* peek() const;

    void* pop();

    void cleanup() const;
};

void stackNestedTest();

#endif //CPP_PLAYGROUND_2_STACKNESTEDTICPP_H
