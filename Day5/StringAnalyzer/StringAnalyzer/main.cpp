//
//  main.cpp
//  StringAnalyzer
//
//  Created by Aiden Pratt on 8/25/23.
//

#include <iostream>
#include <string>
#include "WordHelpers.h"
#include "LetterHelpers.h"

//MAIN
int main(int argc, const char * argv[]) {
    
    bool userInput = true;
    
    while (userInput){
        
        std::cout << "Enter a string containing one or more sentences: \n";
        std::string input;
        std::getline( std::cin, input );
        
        if (input == "done"){
            userInput = false;
        }
        else {
            
            std::cout << "Analysis of your string: \n";
        
    std::cout << "Number of words: " << numWords(input) << "\n";
        
    std::cout << "Number of sentences: "<< numSentences(input) << "\n";
        
    std::cout << "Number of vowels: "<< NumVowels(input) << "\n";
        
    std::cout << "Number of consonants: " << numConsonants(input) << "\n";
        
    std::cout << "Reading level: " << AverageWordLength(input) << "\n";
        
    std::cout << "Average vowels per word: " << AverageVowelPerWord(input) << "\n";
        
        }
    }
    
    std::cout << "Thanks! \n";
    
    return 0;
}
