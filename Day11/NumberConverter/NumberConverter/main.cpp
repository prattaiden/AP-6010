//
//  main.cpp
//  NumberConverter
//
//  Created by Aiden Pratt on 9/5/23.
//

#include <iostream>
#include "numbConvUtil.hpp"

int main(int argc, const char * argv[]) {

    //take an input from user of a number type
    std::cout << "Enter a number as a decimal, hexidecimal, or binary: ";
    std::string input;
    std::cin >> input;
    
    //take an input from user of the base type depending on their number
    std::cout << "Enter the base: ";
    int base;
    std::cin >> base;
    
    //printing out the integer of the number that user enters
    std::cout << "Integer of entered number is: " << stringToInt(input, base) << "\n";

    int newInput;
    
    //prompting the user to enter a number for part 2
    //take an integer and converting it to a string
    std::cout << "enter a number: ";
    std::cin >> newInput;
    
    //printing out the functions that take an int and change it to a string
    std::cout << "decimal number: " << intDecimalToString(newInput) << "\n";
    std::cout << "binary number: " << intBinaryToString(newInput) << "\n";
    std::cout << "hex number: " << intHexToString(newInput) << "\n";
    
    
    return 0;
}
