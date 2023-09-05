//
//  numbConvUtil.cpp
//  NumberConverter
//
//  Created by Aiden Pratt on 9/5/23.
//

#include "numbConvUtil.hpp"


//bool function to check if the input is negative and apply to the other functions
bool isItNegative(std::string input){
    return input[0] == '-';
}
        
        
//function to check a string input and change each character to an integer
int getNumFromChar(char& c){
    int numberValue = 0;
    c = towlower(c);
    
    //if and else if statements to determine the character correlation with number value
    //if it is between 0 and 9, it will equal a decimal digit
    //between a and f, the number value equals the character - a and + 10
    if (c >= '0' && c <= '9'){
        numberValue = c - '0';
    }
    else if ( c >= 'a' && c <= 'f'){
        numberValue = c - 'a' + 10;
    }
    return numberValue;
}

//function to change the string inputed by user to a decimal
int stringToInt(std::string input, int base){
    //string for base 10 to integer when the user inputs a DECIMAL
    int sign = 1;
    if(isItNegative(input)){
        sign = -1;
        input=input.substr(1);
    }
    
    if (base == 10){
        return std::stoi(input);
    }
    //string base 2 to integer when the user inputs a BINARY
    else if (base == 2){
        int inputAsInt = std::stoi(input);
        int power = 0;
        int sum = 0;
        while (inputAsInt >= 1){
            sum += pow(2, power)*(inputAsInt%10);
            inputAsInt = inputAsInt/10;
            power++;
        }
        return sum * sign;
    }
    //string base 16 to integer when user inputs a HEX
    else if (base == 16){
        int power2 = 0;
        int result = 0;
        for (int long i = input.length() -1; i >= 0 ; i --){
            result += getNumFromChar(input[i]) * pow(16, power2);
            power2++;
        }
        
        return result * sign;
    }
    return 0;
}
    
//functions below for taking in an integer and changing them to a string
//change a decimal integer to a string
std::string intDecimalToString (int input){
    std::string sign = "";
    if (input < 0){
        sign = "-";
        input *= -1;
    }
    std::string decimalString = std::to_string(input);
    return sign + decimalString;
    
    
}

//change a binary integer to a string
std::string intBinaryToString (int input){
    //binary
    std::string binaryString = "";
    std::string sign = "";
    if (input < 0){
        sign = "-";
        input *= -1;
    }
    while( input >= 1){
        int num = input%2;
        input = input/2;
        binaryString += std::to_string(num);
       
    }
   //built in code to reverse the order, because the conolse reads it left to right
    //needs to be outputted from right to left
    std::reverse(binaryString.begin(), binaryString.end());
    
    return sign + binaryString;
}

//change a hex integer to a string
std::string intHexToString (int input){
    //hex
    std::string hexString = "";
    std::string sign = "";
    if (input < 0){
        sign = "-";
        input *= -1;
    }
    while (input != 0){
        int remainder = 0;
        char character = '\0';
        //using modulu
        //dividing the input by 16 and sacing the remainder in int remainder
        remainder = input%16;
        
        //if the remainder is less than 10, then digits 0 to 9 are used
        //these are appended to the hexString
        //else when the remainder is great than 10
        //a to f are used in hexidecimal system
        if (remainder < 10){
            character = remainder + 48;
        }
        else {
            character = remainder + 55;
        }
        
        hexString += character;
        
        input = input/16;
    }
    
    //function to reverse so that it is in the proper order
    std::reverse(hexString.begin(), hexString.end());
    return sign + hexString;
}


