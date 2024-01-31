//
// Created by Or on 1/31/2024.
//

#ifndef CPP_PLAYGROUND_2_NESTEDFRIENDTICPP_H
#define CPP_PLAYGROUND_2_NESTEDFRIENDTICPP_H


struct Holder {
private:
    int a[20];
public:
    void initialize();

    struct Pointer;
    friend Pointer;

    struct Pointer {
    private:
        Holder* h;
        int* p;
    public:
        void initialize(Holder* h);

        // Move around in the array:
        void next();

        void previous();

        void top();

        void end();

        // Access values:
        int read();

        void set(int i);
    };
};

void testNestedFriendDemo();

#endif //CPP_PLAYGROUND_2_NESTEDFRIENDTICPP_H
