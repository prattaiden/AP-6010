//
//  LetterHelpers.cpp
//  StringAnalyzer
//
//  Created by Aiden Pratt on 8/28/23.
//

#include <stdio.h>
#include <string>
#include "LetterHelpers.h"
#include "WordHelpers.h"


//is it a vowel function
bool IsVowel(char c){
    c = tolower(c);
    return (c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u');

}
double NumVowels(std::string s){
    double vowelNum = 0;
    for (int i = 0; i < s.length(); i++){
        if (IsVowel(s[i])){
            vowelNum++;

        }
    }
    return vowelNum;
}

//vowel averages per word
double AverageVowelPerWord(std::string s){
    double vowelCount = 0.0;
    vowelCount = (NumVowels(s) / numWords(s));
    
    return vowelCount;
}


//is it a consonant function
bool IsConsonant(char c){
    return ( !IsVowel(c) && !ispunct(c) && !IsSpace(c));
}


//number of consonants
double numConsonants(std::string s){
    double counter = 0;
    for (int i = 0; i < s.length() ; i++){
        if (IsConsonant((s[i]))){
            counter++;
        }
    }
    return counter;
}


