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

using namespace std;

// Break a file into whitespace-separated words
void testGetWordsTICPP() {
    vector<string> words;

    filesystem::path inPath = filesystem::absolute("../TICPP_VOL1/ch_2/GetWords_TICPP.cpp");
    cout << "Input file path: " << inPath << endl;

    ifstream in(inPath);
    if (!in) {
        cerr << "Error opening input file: " << strerror(errno) << endl;
        return;
    }

    string word;
    while (in >> word)
        words.push_back(word);

    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;

}
