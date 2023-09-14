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
    myVector vec1(10);
    
    //creating a vector of vec1
   //vec1.makeVector(10);
    
    //pushing back 1 into the vector
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(5);
    
    //TEST 1 AND 2 -----------------------------pushback/get---------
    //testing pushback and get
    assert(vec1.get(0) == 1 && "failed test 1\n");
    assert(vec1.get(1) == 2 && "failest test 2\n");
    
    
    //TEST 3 ----------------------------set---------------
    //testing set and get
    vec1.set(0, 4);
    assert(vec1.get(0) == 4 && "failed test 3\n");
    
    
    //TEST 4 ----------------------get size------------------------
    //testing get size
    assert(vec1.getSize() == 3 && "failed test 4\n");
    
    
    //TEST 5-----------------------pop back ----------
    //testing pop back and getsize
    vec1.pop_back();
    assert(vec1.getSize() == 2 && "failed test 5\n");

    
    //TEST 6 --------------------capacity----------
    //testing get capacity
    assert(vec1.getCapacity() == 10 && "failed test 6\n");
    
    
    //TEST 7 ------------------growth and capacity----------------
   //testing that capacity is updated and doubled with the vector is grown
    vec1.gotGrowth();
    assert(vec1.getCapacity() == 20 && "failed test 7\n");
    
 
    //TEST 8 -------------------------operators--------------
    myVector vec2 (10);
    vec2.push_back(5);
    vec2.push_back(3);
    vec2.push_back(4);
    vec2.push_back(3);
    vec2.push_back(9);
    
    

    //TEST 9 --------------------------copy constructor----------
    //make a copy through this constructor
    //testing if vec 3 is now == to vec 2
    //and testing the == operator
    myVector vec3(vec2);
    assert(vec3 == vec2 && "failed test 9\n");
    
    
    //TEST 10 ---------------------- != operator---------------
   
    
    vec3.push_back(4);
    assert(vec3 != vec2 && "failed test 10\n");

    
    //Test 11 ----------------tests for math operators----------
    
    //creating two vectors to be used for math operator tests
    myVector vec4 (6);
    vec4.push_back(4);
    vec4.push_back(3);
    vec4.push_back(0);
    vec4.push_back(2);
    vec4.push_back(5);
    vec4.push_back(9);
    
    
    myVector vec5 (6);
    vec5.push_back(4);
    vec5.push_back(3);
    vec5.push_back(1);
    vec5.push_back(2);
    vec5.push_back(5);
    vec5.push_back(9);
    
    //test if vec4 is less than < vec5
    assert((vec4 < vec5) && (vec5 > vec4) && (vec4 <= vec5) && (vec5 >= vec4) && "failed test 11");

    //Test 12 ------------------ test for [] operators -----------
    
    //std::cout << "\n";
   // vec3.printVector();
    //[]&
    vec3[1] = 69;
    //std::cout << "\n";
   // vec3.printVector();
    int index1 = vec3[1];
    
    assert(index1 = 69 && "failed test 12\n");
           
    
    std::cout << "passed all tests\n";
}


    
    


