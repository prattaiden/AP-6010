//
//  test.cpp
//  DiyVector
//
//  Created by Aiden Pratt on 9/12/23.
//


#include "test.hpp"
#include "VectorClass.hpp"


//-----------------------------  TEST FUNCTION -----------------------------//
void test(){
    
//---------------------test 2 - 1 (INTEGERS )-------------------------
    
    MyVector<int> v1;
    
    //-----------push back_____________________
    v1.push_back(1);
    v1.push_back(3);
    
    //TEST 1.1
    //-----------[] operator___________________
    assert((v1[0] == 1) && "failed test 1.1");
    
    //TEST 1.2
    //-------------check size_______________________
    //size here should be 2 as two values were pushed back earlier
    assert(v1.getSize() == 2 && "failed test 1.2");
    //check capacity____________________
    //capacity is auto set to ten, so 10 is expected
    //TEST 1.3
    assert(v1.getCapacity() == 10 && "failed test 1.3");
    
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(1);

    //TEST 1.4
    //--------------check capacity 2______________________
    //when the size is one less than capacity, capacity is expected to double
    assert(v1.getCapacity() == 20);
    
    //--------------copy constructor_________________
    MyVector<int> v2(v1);
    
    //TEST 1.5
    //---------------- == operator______________________
    assert(v2 == v1 && "failed test 1.5");
    
    MyVector<int> v3;
    
    v3.push_back(3);
    v3.push_back(3);
    
    //TEST 1.6
    //---------------- += operator_____________________
    //this adds the values in the vector from v2 into the v3 vector
    //v3 is expected to be 4, 6
    v3 += v2;
    
    MyVector<int> v4;
    
    v4.push_back(4);
    v4.push_back(6);
    
    assert(v3 == v4 && "failed test 1.6");
    
    //-----------------print___________________________
//    v3.printVector();
    
    //TEST 1.7
    //-----------------math operators___________________
   // updated the int vectors to be used for math operator tests
    MyVector<int> v5;
    v5.push_back(4);
    v5.push_back(3);
    v5.push_back(0);
    v5.push_back(2);
    v5.push_back(5);
    v5.push_back(9);
   
    MyVector<int> v6;
    v6.push_back(4);
    v6.push_back(3);
    v6.push_back(1);
    v6.push_back(2);
    v6.push_back(5);
    v6.push_back(9);
    
    //test if v5 is less than < v6
    //the operators here first check that the vectors are the same size
    //if size is the same, then it compares individual elements
    assert((v5 < v6) && (v6 > v5) && (v5 <= v6) && (v6 >= v5) && "failed test 1.7");
    
    //TEST 1.8
    //----------------------------get and set test__________________________________
    //asserting that when getting position 4 in v6 it is 5
    assert(v6.get(4) == 5 && "failed test 1.8");
    
    v6.set(4, 6);
    
    //TEST 1.9
    //asserting that the set works and changes position 4 equal to 6
    assert(v6.get(4) == 6 && "failed test 1.9");
    
    //TEST 1.1.1
    //-------------------------------popback____________________________________________
    //popping off the last element in v6 vector
    //vector size should be 5 now
    v6.pop_back();
    assert(v6.getSize() == 5 && "failed test 1.1.1");
    
    
    
//-------------------------test2 - 2 (STRINGS)---------------------------------------//
    
    //--------------------declare vector string_____________________
    MyVector<std::string> s1;
    
    //----------------------pushback string________________________
    s1.push_back("hello");
    
    MyVector<std::string> s2;
    
    s2.push_back("bye");
    
    //------------------------ += operator string_____________________
    //the += operator is pushing these two strings together into index 0 of s1
    s1 += s2;
    
    //TEST 2.1
    assert(s1[0] == "hellobye" && "failed test 2.1");
    
    //TEST 2.2
    //size is still one in s1
    assert(s1.getSize() == 1 && "failed test 2.2");
    
    //TEST 2.3, 2.4, 2.5, 2.6
    //---------------------- pushback and popback_________________________
    s1.push_back("aloha");
    
    //asserting that index 1 contains the pushed back string
    assert(s1[1] == "aloha" && "failed test 2.3");
    //checking if s1 size updated
    assert(s1.getSize() == 2 && "failed test 2.4");
    
    //pop back method to remove last index
    s1.pop_back();
    //asserting that the size shrunk after pop back
    assert(s1.getSize() == 1 && "failed test 2.5");
    //asserting that capacity is still set to 10 after changes
    assert(s1.getCapacity() == 10 && "failed test 2.6");
    
    //TEST 2.7
    //operators__________________________________
    MyVector<std::string> s3(s1);
    //asserting that the copy constructor works and the == can compare the strings
    assert(s1 == s3 && "failed test 2.7");
    
    //TEST 2.8
    //asserting that a string with size 1 is less than a string with size 2
    assert(s2 < s1 && s1 > s2 && "failed test 2.8");
    
    
    
    
   // s1.printVector();
    
//----------------------test 2 - 3 (CHARS) ------------------------------------
    
    //TEST 3.1
    //declare vector char_____________________
    MyVector<char> c1;
    //push back char___________________________
    c1.push_back('b');
    MyVector<char> c2;
    c2.push_back('v');
    assert(c1.getSize() == c2.getSize() && "failed test 3.1");
    
    //print char______________________________
  //  c1.printVector();
    
   // c2.printVector();
    
    //+= char ________________________
    c1 += c2;
    
  //  c1.printVector();
    
    
    
//---------------------------test 2 - 4 (DOUBLES) -----------------------------
    
    //TEST 4.1, 4.2, 4.3, 4.4, 4.5
    //declar vector double____________________________
    MyVector<double> d1;
    //pushback double_________________________________
    d1.push_back(5.432);
    d1.push_back(5.0);
    d1.push_back(2.9);
    d1.push_back(6.0);
    d1.push_back(4.4444);
 
 
     //dub1.printVector();
 
     assert(d1[0] == 5.432 && "failed test 4.1");
     assert(d1[3] == 6.0 && "failed test 4.2");
 
     d1.pop_back();
 
     assert(d1.getSize() == 4 && "failed test 4.3");
     assert(d1.getCapacity() == 10 && "failed test 4.4");
 
     d1.push_back(5.0);
     d1.push_back(2.9);
     d1.push_back(6.0);
     d1.push_back(4.4444);
     d1.push_back(5.0);
     d1.push_back(2.9);
     d1.push_back(6.0);
     d1.push_back(4.4444);
 
     //the capacity should double because the pushback has set the size to be greater than the old vector,
     assert(d1.getCapacity() == 20 && "failed test 4.5");
 
     MyVector<double>d2;

     d2.push_back(4.3);
     d2.push_back(6.8);

    //TEST 4.6, 4.7 ,4.8
    //operators__________________________________
     assert(d2 <= d1 && d1 > d2 && d2 < d1 && d1 >= d2 && "failed test 4.6");

     MyVector<double>d3;

     d3.push_back(4.3);
     d3.push_back(6.8);

     //this works because the contents of these vectors are exact same
     //if a double value inside dub3 was slightly different, it would fail
     assert(d2 == d3 && "failed test 4.7");

     MyVector<double>d4;

     d4.push_back(10.1);
     d4.push_back(10.1);

     //this is true because the second index in dub 4 is ".1" larger than the second // index in dub3
     assert(d4 > d3 && "failed test 4.8");


     MyVector<double>d5;
    
    //+ operator_______________________________
     //d5 = d4 + d3;

     MyVector<double>d6;

     d6.push_back(14.4);
     d6.push_back(16.9);
 
    
    
//---------------------------ALL TESTS PASS-------------------------
    
        std::cout << "\npassed all tests\n";

    
    
    
}

