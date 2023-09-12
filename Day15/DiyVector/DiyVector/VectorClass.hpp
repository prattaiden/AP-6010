//
//  VectorClass.hpp
//  DiyVector
//
//  Created by Aiden Pratt on 9/12/23.
//

#ifndef VectorClass_hpp
#define VectorClass_hpp

#include <stdio.h>
#include <iostream>
#include <cassert>

class myVector{
public:
    myVector makeVector(size_t initialCapacity);
    void freeVector();
    void push_back(int val);
    void pop_back();
    int get(size_t pos);
    void set(size_t pos, int value);
    size_t getSize();
    size_t getCapacity();
    void gotGrowth();
private:
    int* data_;
    size_t capacity_, size_;
    void growVector();
};




#endif /* VectorClass_hpp */
