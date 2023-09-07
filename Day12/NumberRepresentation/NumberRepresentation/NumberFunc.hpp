//
//  NumberFunc.hpp
//  NumberRepresentation
//
//  Created by Aiden Pratt on 9/6/23.
//

#ifndef NumberFunc_hpp
#define NumberFunc_hpp

#include <stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cassert>
#include<iomanip>



//to check the precision of the doubles
bool approxEquals (double a, double b, double tollerance);

//print characters from file
void printChars (std::ifstream& File);
    
    
//to print the characters from the file we take in
void asUnCounter (std::ifstream& File);

#endif /* NumberFunc_hpp */
