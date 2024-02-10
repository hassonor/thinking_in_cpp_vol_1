//
// Created by Or Hasson on 07/02/2024.
//

#include "headers/StackCh6.h"
#include <iostream>
#include <cassert>
#include <filesystem>
#include <fstream>
#include <cstring>


StackCh6::Link::Link(void* _data, Link* _next) {
    data = _data;
    next = _next;
}

StackCh6::Link::~Link() {}

StackCh6::StackCh6() { head = 0; }

void StackCh6::push(void* _data) {
    head = new Link(_data, head);
}

void* StackCh6::peek() const {
    assert(head != nullptr);
    return head->data;
}

void* StackCh6::pop() {
    if (head == nullptr) return nullptr;
    void* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}

StackCh6::~StackCh6() {
    assert(head == nullptr);
}

void testStackCh6() {
    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_6/Stash2Ch6.cpp");
    std::cout << "Input file path: " << inPath << std::endl;
    std::ifstream in(inPath);

    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    StackCh6 textlines;
    std::string line;

    // Read file and store lines in the stack
    while (getline(in, line))
        textlines.push(new std::string(line));

    // Pop the lines from the stack and print them
    std::string* s;
    while ((s = (std::string*) textlines.pop()) != nullptr) {
        std::cout << *s << std::endl;
        delete s;
    }
}