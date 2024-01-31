//
// Created by Or on 1/12/2024.
//

#include "headers/FillStringTICPP.h"
#include <string>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <cstring>


void testFillStringTICPP() {
    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_2/FillStringTICPP.cpp");
    std::cout << "Input file path: " << inPath << std::endl;

    std::ifstream in(inPath);
    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    std::string s, line;
    while (getline(in, line))
        s += line + "\n";

    std::cout << s;
}
