//
// Created by Or on 02/17/2024.
//

#include "headers/OStack.h"

// Object destructor definition
Object::~Object() {}

// OStack::Link constructor definition
OStack::Link::Link(Object* _data, Link* _next) : data(_data), next(_next) {}

// OStack constructor definition
OStack::OStack() : head(nullptr) {}

// OStack destructor definition
OStack::~OStack() {
    while (head) {
        delete pop();
    }
}

// push method definition
void OStack::push(Object* _data) {
    head = new Link(_data, head);
}

// peek method definition
Object* OStack::peek() const {
    return head ? head->data : nullptr;
}

// pop method definition
Object* OStack::pop() {
    if (head == nullptr) return nullptr;
    Object* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}
