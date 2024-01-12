#include "headers/Scopy_TICPP.h"
#include <string>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <cstring>

using namespace std;

// Copy one file to another, a line at a time
void testScopy_TICPP() {
    filesystem::path inPath = filesystem::absolute("../TICPP_VOL1/ch_2/Scopy_TICPP.cpp");
    filesystem::path outPath = filesystem::absolute("../TICPP_VOL1/ch_2/Scopy2_TICPP.cpp");

    cout << "Input file path: " << inPath << endl;
    cout << "Output file path: " << outPath << endl;

    ifstream in(inPath);
    if (!in) {
        cerr << "Error opening input file: " << strerror(errno) << endl;
        return;
    }

    ofstream out(outPath);
    if (!out) {
        cerr << "Error opening output file: " << strerror(errno) << endl;
        return;
    }

    string s;
    while (getline(in, s))
        out << s << "\n";
}
