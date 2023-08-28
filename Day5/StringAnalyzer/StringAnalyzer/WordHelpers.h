//
//  WordHelpers.h
//  StringAnalyzer
//
//  Created by Aiden Pratt on 8/28/23.
//

#ifndef WordHelpers_h
#define WordHelpers_h
#include <string>


//number of words
double numWords(std::string s);


//number of sentences
double numSentences(std::string c);


//is it a space
bool IsSpace( char c);


//word length avg
double AverageWordLength(std::string s);


#endif /* WordHelpers_h */
