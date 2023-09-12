//
//  VectorClass.cpp
//  DiyVector
//
//  Created by Aiden Pratt on 9/12/23.
//

#include "VectorClass.hpp"


//makevector function----
myVector myVector::makeVector(size_t initialCapacity){
 
    capacity_ = initialCapacity;
    size_= 0;
    data_ = new int[capacity_];
    
    return *this;
    
}

//freevector function-----

void myVector::freeVector(){
    
    size_ = 0;
    capacity_ = 0;
    delete[] data_;
    
}
//pushback function
void myVector::push_back(int val){
    //if the capacity is only 1 great than the size
    if (size_+1 == capacity_){
        //want to grow the vector function
        growVector();
    }
    data_[size_] = val;
    //copies callstack value to the heap
    size_++;
}

//popback function
void myVector::pop_back(){
    size_--;
}

//get
int myVector::get(size_t pos){
    //ensure the data is pointing at something
    assert(data_ != nullptr);
    
    assert(pos < size_);
    
    return data_[pos];
    }

//set
void myVector::set(size_t pos, int value){
    
    assert(pos >= 0 && pos < size_);
    
    data_[pos] = value;
    
}

//accessing the class
void myVector::growVector(){
    capacity_ = capacity_ * 2;
    
    //temp array new space on heap
    int* tempArray = new int[capacity_];
    
    for (int i = 0; i < size_; i++){
        tempArray[i] = data_[i];
    }
    delete[] data_;
    //Set someVar.data = the pointer to the temp array.
    data_ = tempArray;
    //Set the pointer to the temp array to nullptr.
    tempArray = nullptr;
}

//get size
size_t myVector::getSize(){
    
    return size_;
    
    
}
//get capacity
size_t myVector::getCapacity(){
    
    return capacity_;
}

//get growth
void myVector::gotGrowth(){
    growVector();
}




