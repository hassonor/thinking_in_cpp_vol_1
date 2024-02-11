//
// Created by Or on 2/11/2024.
//

#include "headers/FName1.h"
#include <iostream>
#include <fstream>
#include <string>


class FName1 : public std::ifstream {
    std::ifstream file;
    std::string fileName;
    bool named;
public:
    FName1() : named(false) {}

    FName1(const std::string& fname) : fileName(fname), file(fname.c_str()) {
        named = true;
    }

    std::string name() const { return fileName; }

    void name(const std::string& newName) {
        if (named) return; // Don't overwrite
        fileName = newName;
        named = true;
    }

    operator std::ifstream&() { return file; }
};

void testFName1() {
    FName1 file("Fname1.cpp");
    std::cout << "name: " << file.name() << std::endl;
    std::string s;
    getline(file, s); // These work too!
    file.seekg(-200, std::ios::end);
    file.close();
}