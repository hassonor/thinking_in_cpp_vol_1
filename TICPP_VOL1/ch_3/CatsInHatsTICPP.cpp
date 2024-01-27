//
// Created by Or on 1/25/2024.
//

#include "headers/CatsInHatsTICPP.h"
#include <iostream>

using namespace std;

void removeHat(char cat) {
    for (char c = 'A'; c < cat; c++)
        cout << " ";
    if (cat <= 'Z') {
        cout << "cat " << cat << endl;
        removeHat(cat + 1); // Recursive call
    } else {
        cout << "VOOM!!!" << endl;
    }
}