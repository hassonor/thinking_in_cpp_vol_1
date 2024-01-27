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

using namespace std;

// Copy an entire file into a vector of string
void testFillVectorTICPP() {
    vector<string> v;

    filesystem::path inPath = filesystem::absolute("../TICPP_VOL1/ch_2/FillVector_TICPP.cpp");
    cout << "Input file path: " << inPath << endl;

    ifstream in(inPath);
    if (!in) {
        cerr << "Error opening input file: " << strerror(errno) << endl;
        return;
    }

    string line;
    while (getline(in, line)) {
        v.push_back(line); // Add the line to the end
    }

    // Add line numbers:
    for (int i = 0; i < v.size(); i++)
        cout << i << ": " << v[i] << endl;

}
