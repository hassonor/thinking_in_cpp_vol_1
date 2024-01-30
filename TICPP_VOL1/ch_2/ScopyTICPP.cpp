#include "headers/ScopyTICPP.h"
#include <string>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <cstring>

// Copy one file to another, a line at a time
void testScopyTICPP() {
    std::filesystem::path inPath = std::filesystem::absolute("../TICPP_VOL1/ch_2/Scopy_TICPP.cpp");
    std::filesystem::path outPath = std::filesystem::absolute("../TICPP_VOL1/ch_2/Scopy2_TICPP.cpp");

    std::cout << "Input file path: " << inPath << std::endl;
    std::cout << "Output file path: " << outPath << std::endl;

    std::ifstream in(inPath);
    if (!in) {
        std::cerr << "Error opening input file: " << strerror(errno) << std::endl;
        return;
    }

    std::ofstream out(outPath);
    if (!out) {
        std::cerr << "Error opening output file: " << strerror(errno) << std::endl;
        return;
    }

    std::string s;
    while (getline(in, s))
        out << s << "\n";
}