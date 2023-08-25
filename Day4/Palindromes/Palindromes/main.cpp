//
//  main.cpp
//  Palindromes
//
//  Created by Aiden Pratt on 8/24/23.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
 
    //setting string variables
    std::string inputWord;
    std::string reversed;
    //asking use for a string
    std::cout << "enter a string: ";
    std::cin >> inputWord;
    std::cout << inputWord << "\n";
    
    for (int long i = inputWord.length()-1; i >= 0 ; i--){
        reversed = reversed + inputWord[i];
        }
    
    if (reversed == inputWord){
        std::cout << "This is a palindrome.\n";
    }
    else{
        std::cout << "This is not a palindrome.\n";
    }
    std::cout << reversed << "\n";
    
    return 0;
}
