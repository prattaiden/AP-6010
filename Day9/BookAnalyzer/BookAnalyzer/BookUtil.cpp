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




//find the title function
int findTitle(std::vector<std::string> bookTitle){
    int titlePosition = 0;
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
    for (int i = 0; i < bookAuthor.size(); i ++){
        if (bookAuthor[i] == "Author:"){
            authorPosition = i;
        }
    }
    return authorPosition;
}


//printing title function
void printTheTitle(std::vector <std::string> titleOfBook){
    for (int i = findTitle(titleOfBook) + 1;i< findAuthor(titleOfBook); i++){
        std::cout << titleOfBook[i] << " ";
    }
 
}

//find the release date
int findReleaseDate(std::vector<std::string> releaseDate){
    int positionRelease = -1;
    
    for (int i = 0; i < 100; i++){
        if (releaseDate[i] == "Release"){
            positionRelease = i;
        }
    }
    return positionRelease;
}

//printing author
void printTheAuthor(std::vector<std::string> theBook){
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
//walk me through this
void findKeywordOccurrences(const std::vector<std::string>& book, const std::string& keyword) {
    int keywordCounter = 0;
    
    for (int i = 0; i < book.size(); ++i) {
        if (book[i] == keyword) {
            keywordCounter++;
        }
    }
    
    std::cout << "The word " << "\"" << keyword << "\" appears " << keywordCounter << " times." << std::endl;
    
}

//find a specific string, percentage it occurs, and adjacent letters

