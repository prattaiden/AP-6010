//
//  main.cpp
//  Palindromes
//
//  Created by Aiden Pratt on 8/24/23.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
 
    
    //part 1 palindromes
    
    std::string inputWord;
    std::string reversed;
    
    std::cout << "enter a string: ";
    std::cin >> inputWord;
    
    std::cout << inputWord << "\n";
    
    //std::cout << inputWord.length() << "\n";
    
    std::string ogString = inputWord;
    
    
    
    for (int long i = inputWord.length()-1; i >= 0 ; i--){
        
        reversed += inputWord[i];
        std::cout << i <<"\t";
        }
    
    if (reversed == ogString){
        std::cout << "This is a palindrome.\n";
    }
    
    else{
        std::cout << "This is not a palindrome.\n";
    }
    
    std::cout << reversed << "\n";
    


    return 0;
}
