//
//  main.cpp
//  RomanNumerals
//
//  Created by Aiden Pratt on 8/24/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    //variable for user to store their number in
    int userNum;
    //prompting user to enter
    std::cout << "Enter a decimal number:";
    std::cin >> userNum;
    
    if (userNum < 0){
        std::cout << "invalid\n";
    }
    
    while (userNum > 0){
        if (userNum >= 1000){
            std::cout << "M";
            userNum = (userNum - 1000);
        }
        else if (userNum >= 900){
            std::cout << "CM";
            userNum = (userNum - 900);
        }
        else if (userNum >= 500){
            std::cout << "D";
            userNum = (userNum - 500);
        }
        else if (userNum >= 400){
            std::cout << "CD";
            userNum = (userNum - 400);
        }
        else if (userNum >= 100){
            std::cout << "C";
            userNum = (userNum - 100);
        }
        else if (userNum >= 90){
            std::cout << "XC";
            userNum = (userNum - 90);
        }
        else if (userNum >= 50){
            std::cout << "L";
            userNum = (userNum - 50);
        }
        else if (userNum >= 40){
            std::cout << "XL";
            userNum = (userNum - 40);
        }
        else if (userNum >= 10){
            std::cout << "X";
            userNum = (userNum - 10);
        }
        else if (userNum >= 9){
            std::cout << "IX";
            userNum = (userNum - 9);
        }
        else if (userNum >= 5){
            std::cout << "V";
            userNum = (userNum - 5);
        }
        else if (userNum >= 4){
            std::cout << "IV";
            userNum = (userNum - 4);
        }
        else if (userNum >= 1){
            std::cout << "I";
            userNum = (userNum - 1);
        }

        
        
    }
    std::cout << "\n";
        return 0;
}
