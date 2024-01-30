//
// Created by Or on 1/12/2024.
//

#include "headers/HelloStringsTICPP.h"
#include <string>
#include <iostream>

void testHelloStringsTICPP() {
    std::string s1, s2; // Empty stings
    std::string s3 = "Hello, World."; // Initialized
    std::string s4("I am"); // Also initialized
    s2 = " Today"; // Assigning to a string
    s1 = s3 + " " + s4; // Combining strings
    s1 += " 25 "; // Appending to a string
    std::cout << s1 + s2 + "!" << std::endl;
}
