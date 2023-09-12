//
//  test.cpp
//  DiyVector
//
//  Created by Aiden Pratt on 9/12/23.
//


#include "test.hpp"
#include "VectorClass.hpp"



void test(){
    //new variable of myVector type
    myVector vec1;
    
    //creating a vector of vec1
    vec1.makeVector(10);
    
    //pushing back 1 into the vector
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(5);
    
    //TEST 1 AND 2 -----------------------------pushback---------
    //testing pushback and get
    assert(vec1.get(0) == 1 && "failed test 1\n");
    assert(vec1.get(1) == 2 && "failest test 2\n");
    
    //TEST 3 -------------------------------- set---------------
    //testing set and get
    vec1.set(0, 4);
    assert(vec1.get(0) == 4 && "failed test 3\n");
    
    
    //TEST 4 ----------------------get size------------------------
    //testing get size
    assert(vec1.getSize() == 3 && "failed test 4\n");
    
    
    
    //TEST 5-----------------------------------pop back ----------
    //testing pop back and getsize
    vec1.pop_back();
    assert(vec1.getSize() == 2 && "failed test 5\n");

    
    
    //TEST 6 --------------------------------get capacity----------
    //testing get capacity
    assert(vec1.getCapacity() == 10 && "failed test 6\n");
    
    //TEST 8 ------------------growth----------------
    vec1.gotGrowth();
    assert(vec1.getCapacity() == 20 && "failed test 8\n");
    
    //TEST 7---------------------free vector-----------------
    vec1.freeVector();
    assert(vec1.getCapacity() == 0 && vec1.getSize() == 0 && "failed test 7\n");
    
 
    
    
    std::cout << "passed tests\n";
    
    
}


    
    


