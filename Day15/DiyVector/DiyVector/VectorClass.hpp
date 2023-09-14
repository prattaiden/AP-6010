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

//creating a class to make a vector
class myVector{
    
    
public:
    //constructor makeVector
    myVector (size_t initialCapacity);

    //empty constructor
    myVector();

    //Deconstructor
    ~myVector();
    
    //copy constructor
    myVector(const myVector& rhs);
    

    //make vector not needed anymore
    //myVector makeVector(size_t initialCapacity);
    //free vector not needed anymore
    //void freeVector();
    void push_back(int val);
    void pop_back();
    int get(size_t pos) const;
    void set(size_t pos, int value);
    size_t getSize() const;
    size_t getCapacity() const;
    void gotGrowth();
    
    //print the vector
    void printVector() const;
    
    //--------------------OPERATORS---------------------------------

    
    //------------ operator==  -------------
    bool operator==(const myVector& rhs)const;
    
    
    //------------- operator += ------------
    myVector& operator+=(const myVector& rhs);
    
    //------------- operator != --------------

    bool operator!=(const myVector& rhs)const;
    
    
    
    //---------operator [] -------------------
    int& operator[](size_t index);
    
    const int& operator[] (size_t index) const;
    
    
//private class info
private:
    int* data_;
    size_t capacity_, size_;
    void growVector();
};

//another test function
void function();


//operator math functions
bool operator<(const myVector& lhs, const myVector& rhs);

bool operator> (const myVector& lhs, const myVector& rhs);

bool operator<=(const myVector& lhs, const myVector& rhs);

bool operator>=(const myVector& lhs, const myVector& rhs);

#endif /* VectorClass_hpp */

