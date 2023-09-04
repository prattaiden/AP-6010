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
    
    
    std::string userBook;
    std::cout << "Enter a .txt file for a book: ";
    std::cin >> userBook;
    
    
//calling a ifstream myBook and opening "bookpractice.txt"
   std::ifstream myBook( userBook );
  
    //an if statement fail the program if the file inputted is invalid
    if (myBook.fail()){
        std::cout << "Failed to open file.\n";
        exit(1);
    }
    
  //declaring a string called word1 to store and push back into vector
    std::string word1;
    
// while loop to push the words into bookVector
   while( myBook >> word1 ) {
//pushing back the word1 string into the vectore of strings
       bookVector.push_back(word1);
       //clear the file stream
//       bookVector.clear();
//       //bookVector.seekg(0,std::ios::beg);
   }

    
    std::cout << "Title: ";
    //Printing the title of the book
    printTheTitle(bookVector);
    
    std::cout << "\nAuthor: ";
    
    //printing the author of the book
    printTheAuthor(bookVector);
    
    //printing the smallest word in the book
    findSmallWord(bookVector);
    
    //printing the largest word in the book
    findLargeWord(bookVector);
    
    
    
    //printing the number of characters in the book
    std::cout << "character count: " << getNumberOfCharacters(bookVector);
    
    //printing the word count of the book
    std::cout << "\nword count: " << bookVector.size() << "\n";
    

    
    
    
    //converting the book to lowercase 
    //ConvertVectorToLowerCase(bookVector);
    
    //find key words
    std::string input;
    std::cout << "enter a key word: ";
    std::cin >> input;
    findKeywordOccurrences(bookVector, input);

    
    getLocationPercentageAndAdjacentWords(bookVector, input);
    

    
    return 0;
}
