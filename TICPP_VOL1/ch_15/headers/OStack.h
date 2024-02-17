// Created by Or on 02/17/2024.

#ifndef CPP_PLAYGROUND_OSTACK_H
#define CPP_PLAYGROUND_OSTACK_H

class Object {
public:
    virtual ~Object() = 0;
};

class OStack {
private:
    struct Link {
        Object* data;
        Link* next;

        Link(Object* _data, Link* _next);
    } * head;

public:
    OStack();

    ~OStack();

    void push(Object* _data);

    Object* peek() const;

    Object* pop();
};

#endif //CPP_PLAYGROUND_OSTACK_H
