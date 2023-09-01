//
//  main.cpp
//  BookAnalyzer
//
//  Created by Aiden Pratt on 8/31/23.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "BookUtil.hpp"

int main(int argc, const char * argv[]) {

//declaring a vector of strings called "Book"
    std::vector <std::string> bookVector;
    
//calling a ifstream myBook and opening "bookpractice.txt"
   std::ifstream myBook( "bookpractice.txt" );
  
  //declaring a string called word1 to store and push back into vector
    std::string word1;
    
// while loop to push the words into bookVector
   while( myBook >> word1 ) {
//pushing back the word1 string into the vectore of strings
       bookVector.push_back(word1);
   }
    
    //Printing the title of the book
    printTheTitle(bookVector);
    
    //printing the author of the book
    printTheAuthor(bookVector);
    
    //printing the smallest word in the book
    findSmallWord(bookVector);
    
    //printing the largest word in the book
    findLargeWord(bookVector);
    
    //figure out why release date wont print
    //RELEASE DATE wont print
    // findReleaseDate(bookVector);
    
    //printing the number of characters in the book
    std::cout << "character count: " << getNumberOfCharacters(bookVector);
    
    //printing the word count of the book
    std::cout << "\nword count: " << bookVector.size() << "\n";
    
    
    
    
    
    return 0;
}
