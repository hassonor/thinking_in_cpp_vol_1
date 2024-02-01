//
// Created by Or on 2/1/2024.
//

#ifndef CPP_PLAYGROUND_2_HANDLEDEMOTICPP_H
#define CPP_PLAYGROUND_2_HANDLEDEMOTICPP_H


class Handle {
    struct Cheshire; // Class declaration only
    Cheshire* smile;
public:
    void initialize();

    void cleanup();

    int read() const;

    void change(int);
};

void useHandleTest();


#endif //CPP_PLAYGROUND_2_HANDLEDEMOTICPP_H
