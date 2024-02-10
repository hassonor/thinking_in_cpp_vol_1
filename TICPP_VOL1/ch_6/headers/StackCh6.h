//
// Created by Or Hasson on 07/02/2024.
//

#ifndef CPP_PLAYGROUND_2_STACKCH6_H
#define CPP_PLAYGROUND_2_STACKCH6_H


class StackCh6 {
    struct Link {
        void* data;
        Link* next;

        Link(void* _data, Link* _next);

        ~Link();
    } * head;

public:
    StackCh6();

    ~StackCh6();

    void push(void* _date);

    void* peek() const;

    void* pop();
};

void testStackCh6();


#endif //CPP_PLAYGROUND_2_STACKCH6_H
