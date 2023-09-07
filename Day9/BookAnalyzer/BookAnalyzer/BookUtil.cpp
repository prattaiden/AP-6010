//
//  BookUtil.cpp
//  BookAnalyzer
//
//  Created by Aiden Pratt on 8/31/23.
//

#include "BookUtil.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstring>




//find the title function
int findTitle(std::vector<std::string> bookTitle){
    int titlePosition = 0;
    //for loop to look for the title intro
    for (int i = 0; i < bookTitle.size() ; i++){
        if (bookTitle[i] == "Title:"){
            titlePosition = i;
        }
    }
    return titlePosition;
}

//find the author function
int findAuthor(std::vector<std::string> bookAuthor){
    int authorPosition = 0;
    //for loop to look for the author
    for (int i = 0; i < bookAuthor.size(); i ++){
        if (bookAuthor[i] == "Author:"){
            authorPosition = i;
        }
    }
    return authorPosition;
}


//printing title function
void printTheTitle(std::vector <std::string> titleOfBook){
    
    //for loop to print from the title until the key word of author is hit
    for (int i = findTitle(titleOfBook) + 1;i< findAuthor(titleOfBook); i++){
        std::cout << titleOfBook[i] << " ";
    }
 
}

//find the release date
int findReleaseDate(std::vector<std::string> releaseDate){
    int positionRelease = -1;
    
    for (int i = 0; i < 1000; i++){
        if (releaseDate[i] == "Release"){
            positionRelease = i;
        }
    }
    return positionRelease;
}

//printing author
void printTheAuthor(std::vector<std::string> theBook){
    //if Author: does not exist in this range, author is not found
    if (findAuthor(theBook) == -1 || findReleaseDate(theBook) == -1){
            std::cout << "unknown\n";
    }
    else{
        for (int i = findAuthor(theBook) + 1; i < findReleaseDate(theBook); i++){
            std::cout << theBook[i] << " ";
        }
    }
    std::cout << std::endl;
}

//finding the number of characters in the string
int getNumberOfCharacters(std::vector<std::string> Book){
    int characterCount = 0;
    for (int i = 0; i < Book.size(); i++){
        characterCount += Book[i].length();
    }
    return characterCount;
}

//find the smallest word function
void findSmallWord(std::vector<std::string> book){
    std::string smallWord = book[0];
    //sets a string called small word to the first word in the book string
    //if the length of that string is less than a word its compared to
    //small word is set to the new word
    for (int i = 1; i < book.size(); i++){
        if(book[i].length() < smallWord.length()){
            smallWord = book[i]; //setting smaller word
        }
    }
    std::cout << "smallest word: " << smallWord << "\n";
}

//find the largest word function
void findLargeWord(std::vector<std::string> book){
    std::string largeWord = book[0];
    for (int i = 1; i < book.size(); i++){
        if(book[i].length() > largeWord.length()){
            largeWord = book[i]; //setting larger word in the loop
        }
    }
    std::cout << "largest word: " << largeWord << "\n";
}


//find the Keywords
void findKeywordOccurrences(const std::vector<std::string>& book, const std::string& keyword) {
    int keywordCounter = 0;
    for (int i = 0; i < book.size(); i++) {
        if (book[i] == keyword) {
            keywordCounter++;
        }
    }
    
    std::cout << "The word " << "\"" << keyword << "\" appears " << keywordCounter << " times." << std::endl;
    
}


//find a specific string, percentage it occurs, and adjacent letters

// Function to calculate location percentage, and print context
void getLocationPercentageAndAdjacentWords(const std::vector<std::string>& book, const std::string& keyword){
    for (int i = 0; i < book.size(); ++i){
        if (book[i] == keyword) {
            
            // Calculate the location percentage
            double locationPercentage = ( ( double (i) / book.size()  ) * 100);
            
            // Print the location percentage
            std::cout << "at " << locationPercentage << "% ";
            
            // If the current index is greater than 0, print the previous word
            if (i > 0) {
            std::cout << "\"" << book[i - 1] << " ";
            }
            
            // Print the keyword
            std::cout << keyword;
            
            // If the current index is less than the last index, print the next word
            if (i < book.size() - 1) {
                std::cout << " " << book[i + 1];
            }
            // Print the closing quote and newline
            std::cout << "\"" << std::endl;
        }
    }
    
}
