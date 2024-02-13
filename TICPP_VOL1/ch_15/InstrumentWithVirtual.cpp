//
// Created by Or on 2/12/2024.
//

#include "headers/InstrumentWithVirtual.h"
#include <iostream>

enum note {
    middleC, Csharp, Cflat
};

class Instrument {
public:
    virtual void play(note) const {
        std::cout << "Instrument::play" << std::endl;
    }

    virtual const std::basic_string<char> what() const {
        return static_cast<std::string>("Instrument");
    }

    // Assume this will modify the object:
    virtual void adjust(int) {}
};

// WindCh15 objects are InstrumentCh15
// because they have the same interface:

class Wind : public Instrument {
public:
    // Override interface function
    void play(note) const override {
        std::cout << "Wind::play" << std::endl;
    }

    const std::basic_string<char> what() const override {
        return static_cast<std::string>("Wind");
    }

    void adjust(int) override {}
};

class Percussion : public Instrument {
public:
    // Override interface function
    void play(note) const override {
        std::cout << "Percussion::play" << std::endl;
    }

    const std::basic_string<char> what() const override {
        return static_cast<std::string>("Percussion");
    }

    void adjust(int) override {}
};

class Stringed : public Instrument {
public:
    // Override interface function
    void play(note) const override {
        std::cout << "Stringed::play" << std::endl;
    }

    const std::basic_string<char> what() const override {
        return static_cast<std::string>("Stringed");
    }

    void adjust(int) override {}
};

class Brass : public Wind {
public:
    void play(note) const {
        std::cout << "Brass::play" << std::endl;
    }

    const std::basic_string<char> what() const override {
        return static_cast<std::string>("Brass");
    }
};

class Woodwind : public Wind {
public:
    void play(note) const {
        std::cout << "Woodwind::play" << std::endl;
    }

    const std::basic_string<char> what() const override {
        return static_cast<std::string>("Woodwind");
    }
};


void tune(Instrument& i) {
    i.play(middleC);
}

void fff(Instrument& i) { i.adjust(1); }

void testInstrumentWithVirtual() {
    Wind flute;
    tune(flute); // Upcasting


    // Upcasting during array initialization:
    Instrument* A[] = {
            new Wind,
            new Percussion,
            new Stringed,
            new Brass,
    };

    Wind flute2;
    Percussion drum;
    Stringed violin;
    Brass flugelhorn;
    Woodwind recorder;
    tune(flute2);
    tune(drum);
    tune(violin);
    tune(flugelhorn);
    tune(recorder);
    fff(flugelhorn);
}