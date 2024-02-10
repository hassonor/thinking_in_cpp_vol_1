//
// Created by Or on 2/10/2024.
//

#include "headers/Car.h"


class Engine {
public:
    void start() const {}

    void rev() const {}

    void stop() const {}
};

class Wheel {
public:
    void inflate(int psi) const {}
};

class Window {
public:
    void rollup() const {}

    void rolldown() const {}
};

class Door {
public:
    Window window;

    void open() const {}

    void close() const {}
};

class Car {
public:
    Engine engine;
    Wheel wheel[4];
    Door left, right; // 2-door
};

void testCarDemo() {
    Car car{};
    car.left.window.rollup();
    car.wheel[0].inflate(72);
}
