//
// Created by Or on 1/30/2024.
// Linked list with nesting

#include "headers/StackNestedTICPP.h"
#include <iostream>
#include <cassert>
#include <fstream>
#include <filesystem>
#include <string>
#include <cstring>


void Stack_Nested::Link::initialize(void* _data, Stack_Nested::Link* _next) {
    data = _data;
    next = _next;
}

void Stack_Nested::initialize() {
    head = nullptr;
}

void Stack_Nested::push(void* _data) {
    Link* newLink = new Link;
    newLink->initialize(_data, head);
    head = newLink;
}

void* Stack_Nested::peek() const {
    assert(head != nullptr);
    return head->data;
}

void* Stack_Nested::pop() {
    if (head == nullptr) return nullptr;
    void* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}

void Stack_Nested::cleanup() const {
    assert(head == nullptr);
}

void stackNestedTest() {
    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_4/StackNestedTICPP.cpp");
    std::cout << "Input file path: " << inPath << std::endl;

    std::ifstream in(inPath);

    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    Stack_Nested textlines{};
    textlines.initialize();
    std::string line;

    // Read file and store lines in the Stack_Nested:
    while (std::getline(in, line))
        textlines.push(new std::string(line));

    // Pop the lines from the stack and print them:
    std::string* s;
    while ((s = (std::string*) textlines.pop()) != nullptr) {
        std::cout << *s << std::endl;
        delete s;
    }

    textlines.cleanup();
}



