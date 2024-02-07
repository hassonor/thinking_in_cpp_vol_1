//
// Created by Or Hasson on 07/02/2024.
//

#include "headers/HowMany2Demo.h"
#include <fstream>
#include <string>

std::ofstream out("HowMany2.out");

int HowMany2::objectCount = 0;

HowMany2::HowMany2(const std::string& id):name(id) {
    ++objectCount;
    print("HowMany2()");
}

HowMany2::HowMany2(const HowMany2 &h): name(h.name) {
    name += " copy";
    ++objectCount;
    print("HowMany2(const HowMany2&)");
}

void HowMany2::print(const std::string& msg = "") const {
    if(msg.size() != 0)
        out << msg <<std::endl;
    out << '\t' << name << ": " << "objectCount = " << objectCount << std::endl;
}

HowMany2::~HowMany2() {
    --objectCount;
    print("~HowMany2()");
}

// Pass and return BY VALUE:
HowMany2 f(HowMany2 x){
    x.print("x argument inside f()");
    out << "Returning from f()" <<std::endl;
    return x;
}


void testHowMany2Demo(){
    HowMany2 h("h");
    out << "Entering f()" <<std::endl;
    HowMany2 h2 = f(h);
    h2.print("h2 after call to f()");
    out << "Call f(), no return value" << std::endl;
    f(h);
    out << "After call to f()" << std::endl;
}

