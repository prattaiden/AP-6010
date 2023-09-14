//
//  VectorClass.cpp
//  DiyVector
//
//  Created by Aiden Pratt on 9/12/23.
//

#include "VectorClass.hpp"


//-----------------cunstructors and destructor-----------------
//using the cunstroctor to make the vector so it need not be called in main
myVector::myVector (size_t initialCapacity){
 
    capacity_ = initialCapacity;
    size_ = 0;
    data_ = new int[capacity_];

    std::cout << "created a capacity vector\n";
}

//cunstructor for an empty vector
myVector::myVector(){
    size_ = 0;
    capacity_ = 0;
    
    data_ = new int [capacity_];

    std::cout << "created empty vector";
}


//destructor so deleting need not be called in main
myVector::~myVector(){
    size_ = 0;
    capacity_ = 0;
    
    delete [] data_;
    data_ = nullptr;
    assert(data_ == nullptr);
    
    std::cout << "destroyed\n";
}

//copy constructor
myVector::myVector(const myVector& rhs){
    if(this != &rhs){
//        delete[] data_;
        size_ = rhs.getSize();
        capacity_ = rhs.getCapacity();
        data_ = new int [capacity_];
            for(size_t i = 0; i < rhs.getSize(); i++){
                data_[i] = rhs.get(i);
        }
    }
}


//-------------------methods and operators--------------
//pushback function
void myVector::push_back(int val){
    //if the capacity is only 1 great than the size
    if (size_+1 >= capacity_){
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
int myVector::get(size_t pos) const{
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
size_t myVector::getSize() const{
    
    return size_;
    
    
}
//get capacity
size_t myVector::getCapacity() const{
    
    return capacity_;
}

//get growth
void myVector::gotGrowth(){
    growVector();
}

//----checking in main-----------------------------

void function(){
    
    myVector();
    
}

//-----print the vector method -----------------
void myVector::printVector() const{
    for(size_t i = 0; i < size_; i++){
        std::cout << "\n" << data_[i] << " ";
    }
}


//------------------------OPERATORS-------------------------------

//--------------------------operator += ------------------

myVector& myVector::operator+=(const myVector& rhs){
    
    for(size_t i = 0; i < rhs.getSize(); i++){
        push_back(rhs.get(i));
        //return *this;
    }
    return *this;
}

//------------------------operator == ---------------------------------
   
bool myVector::operator==(const myVector& rhs)const{
    
    //checking size of current vector and inputted vector
    //return false if they are not the same size
    if (this->getSize() != rhs.getSize()){
        return false;
    }
    //else if their sizes are equal, go into the for loop
    else if(this->getSize() == rhs.getSize()){
        
        for(size_t i = 0; i <rhs.getSize(); i ++){
            //if the value at these indexes do not equal, false
            if(this->get(i) != rhs.get(i)){
                return false;
            }
            
        }
    }
    return true;
}
 
//------------------------operator != ---------------------------

    bool myVector::operator!=(const myVector& rhs)const{
        return (! operator==(rhs));
        
    }


//------------------------ operators [] ------------------------

//use on left hand side of square bracket, it is changing that address
//reference version for changing what is at index in myVector
int& myVector::operator[](size_t index){
    assert(index < size_ && "out of bounds in opereator[]");
    return data_[index];
    
}

//just give me the value of the int, the const & says
//const version, doesn't change, is just similar to get
const int& myVector::operator[] (size_t index) const{
    assert(index<size_ && "out of bound in operator[]!");
    return data_[index];
}

//------------------- operators < > <= >= ---------------------

// < operator
bool operator<(const myVector& lhs, const myVector& rhs) {
    
    //Check that the size on the lhs is less than rhs
    if (lhs.getSize() < rhs.getSize()) {
        return true;
    } else if (lhs.getSize() > rhs.getSize()) {
        return false;
        
        
    } else {
        // If the sizes are equal, compare individual elements
        for (size_t i = 0; i < lhs.getSize(); ++i) {
            if (lhs.get(i) < rhs.get(i)) {
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

bool operator> (const myVector& lhs, const myVector& rhs){
    return !(operator<(lhs, rhs));
}

// <= operator
bool operator<=(const myVector& lhs, const myVector& rhs) {
    return operator<(lhs, rhs) || lhs.operator==(rhs);
}

// >= operator
bool operator>=(const myVector& lhs, const myVector& rhs) {
    return !(operator<(lhs, rhs)) || lhs.operator==(rhs);
}
