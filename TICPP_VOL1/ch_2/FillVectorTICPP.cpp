//
// Created by Or on 1/12/2024.
//

#include "headers/FillVectorTICPP.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>
#include <cstring>


// Copy an entire file into a vector of string
void testFillVectorTICPP() {
    std::vector<std::string> v;

    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_2/FillVectorTICPP.cpp");
    std::cout << "Input file path: " << inPath << std::endl;

    std::ifstream in(inPath);
    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    std::string line;
    while (getline(in, line)) {
        v.push_back(line); // Add the line to the end
    }

    // Add line numbers:
    for (int i = 0; i < v.size(); i++)
        std::cout << i << ": " << v[i] << std::endl;

}
