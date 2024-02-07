//
// Created by Or on 2/5/2024.
//

#ifndef CPP_PLAYGROUND_2_CONSTRUCTOREX1TICPP_H
#define CPP_PLAYGROUND_2_CONSTRUCTOREX1TICPP_H


class Tree {
    int height;
public:
    Tree(int initialHeight);

    ~Tree(); // Destructor
    void grow(int years);

    void printsize();

};

void treeClassDemo();


#endif //CPP_PLAYGROUND_2_CONSTRUCTOREX1TICPP_H
