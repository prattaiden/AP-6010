//
//  WordHelpers.cpp
//  StringAnalyzer
//
//  Created by Aiden Pratt on 8/28/23.
//

#include <stdio.h>
#include <string>
#include "LetterHelpers.h"


//number of words
double numWords(std::string s){
    double wordCount = 0;
    for (int i = 0; i <= s.length(); i++){
        if (s[i] == ' '){
            wordCount++;
        }
    }
    return wordCount + 1;
}

//average word length function
double AverageWordLength(std::string s){
    double wordLength = 0.0;
    wordLength = (NumVowels(s) + numConsonants(s)) / numWords(s);
        
    return wordLength;
    }

//number of sentences function
double numSentences(std::string c){
    double sentenceCount = 0;
    for (int i = 0; i < c.length(); i++){
        if (std::ispunct(c[i])){
            sentenceCount++;
        }
    }
    return sentenceCount;
}

//is it a space function
bool IsSpace( char c){
    return (c==' ');
}
