//
//  main.cpp
//  NumberRepresentation
//
//  Created by Aiden Pratt on 9/6/23.
//

#include <iostream>
#include "NumberFunc.hpp"

int main(int argc, const char * argv[]) {
    //int a =  sizeof (uint8_t);
    //std::cout << a << "\n";
    
    //variables for 8 bit unsigned
    uint8_t unsignedInt8Min = 0x0;
    uint8_t unsignedInt8Max = 0xFF;
    //variables for 8 bit signed
    int8_t signedInt8Min = 0x80;
    int8_t signedInt8Max =0x7F;
    //variables for 16 bit unsigned
    uint16_t unsignedInt16Min = 0x0;
    uint16_t unsignedInt16Max = 0xFFFF;
    //variables for 16 bit signed
    int16_t signedInt16Min = 0x8000;
    int16_t signedInt16Max = 0x7FFF;
    //variables for 64 bit unsigned
    //2^64 is 1.84e19
    uint64_t unsignedInt64Min = 0x0;
    uint64_t unsignedInt64Max = 0xFFFFFFFFFFFFFFFF;
    //FF59EE833B300000;
    //variables for 64 bit signed
    int64_t signedInt64Min = 0x8000000000000000;
    int64_t signedInt64Max = 0x7FFFFFFFFFFFFFFF;
    
    
    
    std::cout << "PART1\n\n";
    std::cout << +unsignedInt8Min << "\n";
    std::cout << +unsignedInt8Max << "\n";
    std::cout << +signedInt8Max << "\n";
    std::cout << +signedInt8Min << "\n";
    
    std::cout << +unsignedInt16Min << "\n";
    std::cout << +unsignedInt16Max << "\n";
    std::cout << +signedInt16Min << "\n";
    std::cout << +signedInt16Max << "\n";
    
    std::cout << +unsignedInt64Min << "\n";
    std::cout << +unsignedInt64Max << "\n";
    std::cout << +signedInt64Min << "\n";
    std::cout << +signedInt64Max << "\n";
    
    
    
    //Try adding 1 to the max-value variables you defined above and printing it. What happened? Try subtracting 1 from the min values. What happened? Try doing the same thing with the the "undefined behavior sanitizer" turned on (it's a couple checkboxes below the address sanitizer in the product->scheme menu). What happened?
    //when I subract one from the minimum and add one to the maximum. it makes the min the max and the max the min. Why? The undefined sanitizer is not found
    
    //part 2 ----------------------------
    std::cout << "\n\nPART2\n\n";
    
    double f = 0.1;
    double d = 0.2;
    double tollerance = .3;
    //double compute = f + d;
    
    //std::cout << std::setprecision(18)<<.3 << compute << "\n";;
    //assert(compute == 0.3);
    //the assert failed because floats and doubles hold decimal numbers that are not exact. they differ in the later decimals. using the setprecision allows us to see this difference. floats are accurate out to 6 or 7 decimals. doubles can be accurate out to 12 or 14
    
    //printing out to set the precision, and showing what the true under the hood values of f, d, and tollerance are, this helps explain why the function returns true for us.
    std::cout << std::setprecision(18) << "f: " << f << "\nd: " << d << "\ntollerance: " << tollerance << "\n";
    
    std::cout << "test: " << approxEquals(f, d, tollerance) << "\n";
    
    assert(approxEquals(f, d, tollerance));
    
    //part 3--------------------
    std::cout << "\n\nPART 3\n\n";
    
    
    
    //to open the file
    std::ifstream openTestFile("UTF-8-demo.txt");
    //failtest
    if (openTestFile.fail()){
        std::cout << "Failed to open file.\n";
        exit(1);
    }
    //loop to go through the file and print it out char by char
    //it is then pushed back into a vector where the characters can be counted
//    std::string fileOpen;
//    char c;
//    while(openTestFile >> c){
//        std::cout << c << "\n";
//        fileOpen.push_back(c);
//    }
    
    
    //print characters and count
    printChars(openTestFile);
    asUnCounter(openTestFile);


    
    
    
    

    
    return 0;
}
           
    
//What do you see? What text is printed in a readble form? What text is garbled? Does this match your expectations? Why or why not?

//it prints out a couple or a few numbers per line, so I assume the characters values are ascii or unicode

    
    
