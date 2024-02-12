//
// Created by Or on 2/10/2024.
//

#include "headers/StringStack.h"
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cstring>

void StringStack::push(std::string* str) {
    stack.push(str);
}

std::string* StringStack::peek() const {
    return (std::string*) stack.peek();
}

std::string* StringStack::pop() {
    return (std::string*) stack.pop();
}

StringStack::~StringStack() {
    std::string* top = pop();
    while (top) {
        delete top;
        top = pop();
    }
}

void testStringStack() {
    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_14/NameHiding.cpp");
    std::cout << "Input file path: " << inPath << std::endl;
    std::ifstream in(inPath);

    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    std::string line;
    StringStack textlines;
    while (getline(in, line))
        textlines.push(new std::string(line));

    std::string* s;
    while ((s = textlines.pop()) != nullptr) { // No cast!
        std::cout << *s << std::endl;
        delete s;
    }
}