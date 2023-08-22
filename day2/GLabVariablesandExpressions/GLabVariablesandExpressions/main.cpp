//
//  main.cpp
//  GLabVariablesandExpressions
//
//  Created by Aiden Pratt on 8/22/23.
//

#include <iostream>

//Aiden Pratt partners with Melanie Prettyman

int main(int argc, const char * argv[]) {
    
    float userOunces; //setting a float for ounces so it can have decimals

    std::cout << "Please enter a volume of ounces\n"; //taking an input for the volume of ounces the user is adding
    std::cin >> userOunces;
    std::cout << userOunces << " ounces\n";
    
    float userCups = userOunces/8; //calculating the volume of ounces the user added to and converting it to cups
    std::cout << userCups << " cups\n";
    
    float userPints = userOunces/16; //taking user ounces and converting to pints
    std::cout << userPints << " pints\n";
    
    float userGallons = userOunces/128; //taking user ounces and converting to gallons
    std::cout << userGallons << " gallons\n";
    
    float userLiters = userOunces*0.0296; //taking user ounces and converting to liters
    std::cout << userLiters << " liters\n";
    
    float userCubeInch = userOunces*1.8; //taking user ounces and converting to cubic inch
    std::cout << userCubeInch << " cubic inches\n";
    return 0;
}
