//
//  numbConvUtil.hpp
//  NumberConverter
//
//  Created by Aiden Pratt on 9/5/23.
//

#ifndef numbConvUtil_hpp
#define numbConvUtil_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>



int stringToInt(std::string input,int base);

std::string intDecimalToString (int input);

std::string intBinaryToString (int input);

std::string intHexToString (int input);


#endif /* numbConvUtil_hpp */

