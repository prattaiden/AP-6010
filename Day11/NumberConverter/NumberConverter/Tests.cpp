//
//  Tests.cpp
//  NumberConverter
//
//  Created by Aiden Pratt on 9/5/23.
//

#include "Tests.hpp"
#include "numbConvUtil.hpp"
#include <cassert>

void tests(){
    assert(stringToInt("255", 10) == 255);
    
    assert(intHexToString(10) == "A");
    
    assert(intBinaryToString(11) == "3");
    
    assert(intDecimalToString(12) == "12");
    
    assert(stringToInt(intBinaryToString(1111), 2) == 15);
    
    
}
