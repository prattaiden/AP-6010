//
//  BookUtil.hpp
//  BookAnalyzer
//
//  Created by Aiden Pratt on 8/31/23.
//

#ifndef BookUtil_hpp
#define BookUtil_hpp
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>

//function to print the title
void printTheTitle(std::vector <std::string> titleOfBook);

//function to print the author
void printTheAuthor(std::vector<std::string> theBook);

//function to find the date of release. won't work
int findReleaseDate(std::vector<std::string> releaseDate);

//function to get the number of characters
int getNumberOfCharacters(std::vector<std::string> Book);

//function to find the smallest word
void findSmallWord(std::vector<std::string> book);

//function to find the largest word
void findLargeWord(std::vector<std::string> book);

//function to find an inputed key word
void findKeywordOccurrences(const std::vector<std::string>& book, const std::string& keyword);





#endif /* BookUtil_hpp */
