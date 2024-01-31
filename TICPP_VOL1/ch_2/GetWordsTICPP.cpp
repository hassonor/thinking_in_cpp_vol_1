//
// Created by Or on 1/12/2024.
//

#include "headers/GetWordsTICPP.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <filesystem>

// Break a file into whitespace-separated words
void testGetWordsTICPP() {
    std::vector<std::string> words;

    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_2/GetWordsTICPP.cpp");
    std::cout << "Input file path: " << inPath << std::endl;

    std::ifstream in(inPath);
    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    std::string word;
    while (in >> word)
        words.push_back(word);

    for (int i = 0; i < words.size(); i++)
        std::cout << words[i] << std::endl;

}
