//
// Created by Or Hasson on 07/02/2024.
//

#ifndef CPP_PLAYGROUND_2_HOWMANY2DEMO_H
#define CPP_PLAYGROUND_2_HOWMANY2DEMO_H
#include <string>


class HowMany2 {
    std::string name; // Object identifier
    static int objectCount;
public:
    explicit HowMany2(const std::string& id = "");
    ~HowMany2();
    HowMany2(const HowMany2& h);
    void print(const std::string& msg) const;
};

void testHowMany2Demo();


#endif //CPP_PLAYGROUND_2_HOWMANY2DEMO_H
