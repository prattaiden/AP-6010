//
//  NumberFunc.cpp
//  NumberRepresentation
//
//  Created by Aiden Pratt on 9/6/23.
//

#include "NumberFunc.hpp"
#include <iostream>
#include <fstream>


//this function is adding the double variables a and b and checking if they are greater than a preset double tollerance
bool approxEquals (double a, double b, double tollerance){
    if(std::abs(a + b) > tollerance){
        return true;
    }
    else{
        return false;
    }
}




//function to print the characters from the file
void printChars (std::ifstream& File){
    char c;
    while(File >> c){
        std::cout << c << "\n";
    }
}
    




//function to count ascii Characters
void asUnCounter (std::ifstream& File){
    int ASCIICounter = 0;
    int UnicodeCounter = 0;
    char c;
    
    File.clear();
    File.seekg(0, std::ios::beg);
    //iterate through the file through each character at a time
    while(File >> c){
        //ascii range of 0 - 127
        if (c >= 0 && c <= 127){
            ASCIICounter++;
        }
        //out of this range is unicode
        else{
            UnicodeCounter++;
        }
    }
    std::cout << ASCIICounter << "\n";
    std::cout << UnicodeCounter;
}

    
    

    
    
    
    
    

