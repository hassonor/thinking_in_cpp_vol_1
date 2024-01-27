//
// Created by Or on 1/12/2024.
//

#include "headers/FillStringTICPP.h"
#include <string>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <cstring>

using namespace std;


void testFillStringTICPP() {
    filesystem::path inPath = filesystem::absolute("../TICPP_VOL1/ch_2/FillString_TICPP.cpp");
    cout << "Input file path: " << inPath << endl;

    ifstream in(inPath);
    if (!in) {
        cerr << "Error opening input file: " << strerror(errno) << endl;
        return;
    }

    string s, line;
    while (getline(in, line))
        s += line + "\n";

    cout << s;
}
