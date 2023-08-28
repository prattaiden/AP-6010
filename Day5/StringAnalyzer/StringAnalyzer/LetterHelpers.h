//
//  LetterHelpers.h
//  StringAnalyzer
//
//  Created by Aiden Pratt on 8/28/23.
//

#ifndef LetterHelpers_h
#define LetterHelpers_h
#include <string>

//is it a vowel
bool IsVowel(char c);

//number of vowels
double NumVowels(std::string s);

//is it a consonant
bool IsConsonant(char c);

//number of consonants
double numConsonants(std::string s);

//vowels per word avg
double AverageVowelPerWord(std::string s);


#endif /* LetterHelpers_h */
