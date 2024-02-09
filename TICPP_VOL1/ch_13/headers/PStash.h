//
// Created by Or on 2/9/2024.
//

#ifndef CPP_PLAYGROUND_2_PSTASH_H
#define CPP_PLAYGROUND_2_PSTASH_H


class PStash {
    int quantity{}; // Number of storage spaces
    int next{}; // Next empty space

    // Pointer storage:
    void** storage{};

    void inflate(int increase);

public:
    PStash();

    ~PStash();

    int add(void* element);

    void* operator[](int index) const; // Fetch

    // Remove the reference from this PStash:
    void* remove(int index);

    // Number of elements in Stash:
    int count() const { return next; }
};

void testPStash();


#endif //CPP_PLAYGROUND_2_PSTASH_H
