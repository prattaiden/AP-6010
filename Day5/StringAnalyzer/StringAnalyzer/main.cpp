//
//  main.cpp
//  StringAnalyzer
//
//  Created by Aiden Pratt on 8/25/23.
//

#include <iostream>
#include <string>


//WORD COUNT
double numWords(std::string s){
    double wordCount = 0;
    for (int i = 0; i <= s.length(); i++){
        if (s[i] == ' '){
            wordCount++;
        }
    }
    return wordCount + 1;
}

//PUNCTUATION number of sentences
double numSentences(std::string c){
    double sentenceCount = 0;
    for (int i = 0; i < c.length(); i++){
        if (std::ispunct(c[i])){
            sentenceCount++;
        }
    }
    return sentenceCount;
}
    

//VOWELS
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

//SPACE
bool IsSpace( char c){
    return (c==' ');
}
    
//CONSONANT
bool IsConsonant(char c){
    return ( !IsVowel(c) && !ispunct(c) && !IsSpace(c));
}

double numConsonants(std::string s){
    double counter = 0;
    for (int i = 0; i < s.length() ; i++){
        if (IsConsonant((s[i]))){
            counter++;
        }
    }
    return counter;
}

//READING LEVEL
double AverageWordLength(std::string s){
    double wordLength = 0.0;
    wordLength = (NumVowels(s) + numConsonants(s)) / numWords(s);
        
    return wordLength;
    }

//AVG VOWEL PER WORD
double AverageVowelPerWord(std::string s){
    double vowelCount = 0.0;
    vowelCount = (NumVowels(s) / numWords(s));
    
    return vowelCount;
}

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
