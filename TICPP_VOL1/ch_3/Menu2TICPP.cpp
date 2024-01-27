//
// Created by Or on 1/25/2024.
//

#include "headers/Menu2TICPP.h"
#include <iostream>

using namespace std;

void testMenu2TICPP() {
    bool quit = false; // Flag for quitting
    while (!quit) {
        cout << "Select a, b, c or q to quit: ";
        char response;
        cin >> response;
        switch (response) {
            case 'a':
                cout << "you chose 'a'" << endl;
                break;
            case 'b':
                cout << "you chose 'b'" << endl;
                break;
            case 'c':
                cout << "you chose 'c'" << endl;
                break;
            case 'q':
                cout << "quitting menu" << endl;
                quit = true;
                break;
            default:
                cout << "Please use a,b,c or q!" << endl;
        }
    }
}
