//
// Created by Or on 2/10/2024.
//

#include "headers/GameBoardDemo.h"
#include <iostream>

class GameBoard {
public:
    GameBoard() { std::cout << "GameBoard()\n"; }

    GameBoard(const GameBoard&) {
        std::cout << "GameBoard(const GameBoard&)\n";
    }


    GameBoard& operator=(const GameBoard&) {
        std::cout << "GameBoard::operator=()\n";
        return *this;
    }

    ~GameBoard() { std::cout << "~GameBoard()\n"; }
};

class Game {
    GameBoard gb; // Composition
public:
    // Default GameBoard constructor called:
    Game() { std::cout << "Game()\n"; }

    // You must explicitly call the GameBoard
    // copy-constructor or the default constructor
    // is automatically called instead:
    Game(const Game& g) : gb(g.gb) {
        std::cout << "Game(const Game&)\n";
    }

    Game(int) { std::cout << "Game(int)\n"; }

    Game& operator=(const Game& g) {
        // You must explicitly call the GameBoard
        // assignment operator or no assignment at all happens for gb!
        gb = g.gb;
        std::cout << "Game::operator=()\n";
        return *this;
    }

    class Other {
    }; // Nested classEx
    // Automatic type conversion:
    operator Other() const {
        std::cout << "Game::operator Other()\n";
        return Other();
    }

    ~Game() { std::cout << "~Game()\n"; }
};

class Chess : public Game {
};

void f(Game::Other) {}

class Checkers : public Game {
public:
    // Default base-classEx constructor called:
    Checkers() { std::cout << "Checkers()\n"; }

    // You must explicitly call the base-classEx
    // copy constructor or the default constructor
    // will be automatically called instead:
    Checkers(const Checkers& c) : Game(c) {
        std::cout << "Checkers(const Checkers& c)\n";
    }

    Checkers& operator=(const Checkers& c) {
        // You must explicitly call the base-classEx
        // version of operator=() or no base-classEx assignment will happen:
        Game::operator=(c);
        std::cout << "Checkers::operator=()\n";
        return *this;
    }
};

void testGameBoardDemo() {
    Chess d1; // Default constructor
    Chess d2(d1); // Copy Constructor
//    //! Chess d3(1); // Error: no int constructor

    d1 = d2; // Operator= synthesized
//    f(d1); // Type-conversion IS inherited

    Game::Other go;
    //! d1 = go; // operator= not synthesized for differing types

    Checkers c1, c2(c1);
    c1 = c2;
}