//
// Created by Or on 2/1/2024.
//

#include "headers/HandleDemoTICPP.h"

// Define Handle's implementation:

struct Handle::Cheshire {
    int i;
};

void Handle::initialize() {
    smile = new Cheshire;
    smile->i = 0;
}

void Handle::cleanup() {
    delete smile;
}

int Handle::read() const {
    return smile->i;
}

void Handle::change(int _i) {
    smile->i = _i;
}

void useHandleTest() {
    Handle u{};
    u.initialize();
    u.read();
    u.change(1);
    u.cleanup();
}