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

template <typename T>
//creating a class to make a vector
class MyVector{
    
    
public:
    //constructor makeVector
    MyVector (size_t initialCapacity);

    //empty constructor
    MyVector();

    //Deconstructor
    ~MyVector();
    
    //copy constructor
    MyVector(const MyVector& rhs);
    

    //make vector not needed anymore
    //myVector makeVector(size_t initialCapacity);
    //free vector not needed anymore
    //void freeVector();
    void push_back(T val);
    void pop_back();
    T get(size_t pos) const;
    void set(size_t pos, T value);
    size_t getSize() const;
    size_t getCapacity() const;
    void gotGrowth();
    
    //print the vector
    void printVector() const;
    
    //--------------------OPERATORS---------------------------------

    
    //------------ operator==  -------------
    bool operator==(const MyVector<T>& rhs)const;
    
    
    //------------- operator += ------------
    MyVector& operator+=(const MyVector<T>& rhs);
    
    //--------operator + -------------------------------
    MyVector<T>& operator+(const MyVector& rhs);
    
    //------------- operator != --------------

    bool operator!=(const MyVector<T>& rhs)const;
    
    
    
    //---------operator [] -------------------
    T& operator[](size_t index);
    
    const T& operator[] (size_t index) const;
    

    
//private class info
private:
    T* data_;
    size_t capacity_, size_;
    void growVector();

//END OF CLASS-----------------------
};

//another test function
void function();


//operator math functions
template <typename T>
bool operator<(const MyVector<T>& lhs, const MyVector<T>& rhs);

template <typename T>
bool operator> (const MyVector<T>& lhs, const MyVector<T>& rhs);

template <typename T>
bool operator<=(const MyVector<T>& lhs, const MyVector<T>& rhs);

template <typename T>
bool operator>=(const MyVector<T>& lhs, const MyVector<T>& rhs);



//CPP FILE --------------------------------------------------


#endif /* VectorClass_hpp */


//-----------------cunstructors and destructor-----------------
//using the cunstroctor to make the vector so it need not be called in main

template <typename T>
MyVector<T>::MyVector (size_t initialCapacity){
 
    capacity_ = initialCapacity;
    size_ = 0;
    data_ = new T[capacity_];

   // std::cout << "created a vector\n";
}

//cunstructor for an empty vector
template <typename T>
MyVector<T>::MyVector(){
    size_ = 0;
    capacity_ = 10;
    
    data_ = new T [capacity_];

   
}


//destructor so deleting need not be called in main
template <typename T>
MyVector<T>::~MyVector(){
    size_ = 0;
    capacity_ = 0;
    
    delete [] data_;
    data_ = nullptr;
    assert(data_ == nullptr);
    
    //std::cout << "destroyed a vector \n";
}

//copy constructor
template <typename T>
MyVector<T>::MyVector(const MyVector& rhs){
    if(this != &rhs){
        //delete[] data_;
        size_ = rhs.getSize();
        capacity_ = rhs.getCapacity();
        data_ = new T [capacity_];
            for(size_t i = 0; i < rhs.getSize(); i++){
                data_[i] = rhs[i];
        }
    }
}


//-------------------methods and operators--------------
//pushback function------------------------------
template <typename T>
void MyVector<T>::push_back(T val){
    //if the capacity is only 1 greater than the size
    if (size_+1 >= capacity_){
        //want to grow the vector function
        growVector();
    }
    data_[size_] = val;
    //copies callstack value to the heap
    size_++;
}

//popback function----------------------------
template <typename T>
void MyVector<T>::pop_back(){
    assert(size_ != 0 && "vector is empty");
    size_--;
}

//get------------------------------------------
template <typename T>
T MyVector<T>::get(size_t pos) const{
    //ensure the data is pointing at something
    assert(data_ != nullptr);
    
    //commented out for +=????
    //assert(pos <= size_);
    
    return data_[pos];
    }

//set-------------------------------------------
template <typename T>
void MyVector<T>::set(size_t pos, T value){
    
    //commented out for +=???
//    assert(pos >= 0 && pos < size_);
    
    data_[pos] = value;
    
}

//accessing the class-------------------------
template <typename T>
void MyVector<T>::growVector(){
    capacity_ = capacity_ * 2;
    
    //temp array new space on heap
    T* tempArray = new T[capacity_];
    
    for (int i = 0; i < size_; i++){
        tempArray[i] = data_[i];
    }
    delete[] data_;
    //Set someVar.data = the pointer to the temp array.
    data_ = tempArray;
    //Set the pointer to the temp array to nullptr.
    tempArray = nullptr;
}

//get size--------------------------------------
template <typename T>
size_t MyVector<T>::getSize() const{
    
    return size_;
    
    
}
//get capacity----------------------------------
template <typename T>
size_t MyVector<T>::getCapacity() const{
    
    return capacity_;
}

//get growth--------------------------------------
template <typename T>
void MyVector<T>::gotGrowth(){
    growVector();
}

//----checking in main-----------------------------
template <typename T>
void function(){
    
    MyVector<T>();
    
}

//-----print the vector method -----------------
template <typename T>
void MyVector<T>::printVector() const{
    for(size_t i = 0; i < size_; i++){
        std::cout << data_[i] << " ";
    }
}


//----------------------OPERATORS-------------------------------

//--------------------------operator += ------------------

template <typename T>
MyVector<T>& MyVector<T>::operator+=(const MyVector& rhs){
    //loops through the size of rhs and concatinates on
    for(size_t i = 0; i < rhs.getSize(); i++){
        T val = this->get(i) + rhs[i];
        this->set(i, val);
    }
    
    return *this;

}

//------------------------operator == ---------------------------------

template <typename T>
bool MyVector<T>::operator==(const MyVector<T>& rhs)const{
    
    //checking size of current vector and inputted vector
    //return false if they are not the same size
    if (this->getSize() != rhs.getSize()){
        return false;
    }
    //else if their sizes are equal, go into the for loop
    else if(this->getSize() == rhs.getSize()){
        
        for(size_t i = 0; i <rhs.getSize(); i ++){
            //if the value at these indexes do not equal, false
            if(this->get(i) != rhs[i]){
                return false;
            }
            
        }
    }
    return true;
}
 
//------------------------operator != ---------------------------

    //the opposite of ==
template <typename T>
bool MyVector<T>::operator!=(const MyVector& rhs)const{
    return (! operator==(rhs));
        
}


//------------------------ operators [] ------------------------

//use on left hand side of square bracket, it is changing that address
//reference version for changing what is at index in myVector
template <typename T>
T& MyVector<T>::operator[](size_t index){
    assert(index < size_ && "out of bounds in operator[]");
    return data_[index];
    
}

//just give me the value of the int, the const & says
//const version, doesn't change, is just similar to get
template <typename T>
const T& MyVector<T>::operator[](size_t index) const{
    assert(index < size_ && "out of bound in operator[]!");
    return data_[index];
}


//-------------------functions not in the class---------------
//------------------- operators functions < > <= >= ---------------------

// < operator
template <typename T>
bool operator<(const MyVector<T>& lhs, const MyVector<T>& rhs) {
    
    //Check that the size on the lhs is less than rhs
    if (lhs.getSize() < rhs.getSize()) {
        return true;
    } else if (lhs.getSize() > rhs.getSize()) {
        return false;
        
        
    } else {
        // If the sizes are equal, compare individual elements
        for (size_t i = 0; i < lhs.getSize(); ++i) {
            if (lhs[i] < rhs[i]) {
                return true;
            } else if (lhs.get(i) > rhs.get(i)) {
                return false;
            }
        }
        // All elements are equal
        return false;
    }
}

// > operator

template <typename T>
bool operator> (const MyVector<T>& lhs, const MyVector<T>& rhs){
    //return the opposite of above < function
    return !(operator<(lhs, rhs));
}

// <= operator
//return less than function or if the operators or equal
template <typename T>
bool operator<=(const MyVector<T>& lhs, const MyVector<T>& rhs) {
    return operator<(lhs, rhs) || lhs.operator==(rhs);
}

// >= operator
template <typename T>
bool operator>=(const MyVector<T>& lhs, const MyVector<T>& rhs) {
    return (operator>(lhs, rhs)) || lhs.operator==(rhs);
}
