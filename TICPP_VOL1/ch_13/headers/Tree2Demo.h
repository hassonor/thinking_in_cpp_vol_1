//
// Created by Or on 2/8/2024.
//

#ifndef CPP_PLAYGROUND_2_TREE2DEMO_H
#define CPP_PLAYGROUND_2_TREE2DEMO_H

#include <iostream>

class Tree2 {
    int height;
public:
    explicit Tree2(int treeHeight);

    ~Tree2();

    friend std::ostream& operator<<(std::ostream& os, const Tree2* t);
};

void tree2Demo();


#endif //CPP_PLAYGROUND_2_TREE2DEMO_H
