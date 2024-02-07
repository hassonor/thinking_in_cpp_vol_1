//
// Created by Or on 2/7/2024.
//

#include "headers/DefaultCopyConstructor.h"

#include <iostream>
#include <string>
#include <utility>

// Implementations for WithCC
WithCC::WithCC() {}

WithCC::WithCC(const WithCC&) {
    std::cout << "WithCC(WithCC&)" << std::endl;
}

// Implementations for WoCC
WoCC::WoCC(std::string ident) : id(std::move(ident)) {}

void WoCC::print(const std::string& msg) const {
    if (!msg.empty()) std::cout << msg << ": ";
    std::cout << id << std::endl;
}

// Implementations for Composite
Composite::Composite() : wocc("Composite()") {}

void Composite::print(const std::string& msg) const {
    wocc.print(msg);
}

void testComposite() {
    Composite c;
    c.print("Contents  of c");
    std::cout << "Calling Composite copy-constructor" << std::endl;
    Composite c2 = c; // Calls copy-constructor
    c2.print("Contents of c2");
}