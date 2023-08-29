//
//  CardsUtil.hpp
//  Cards
//
//  Created by Aiden Pratt on 8/29/23.
//

#ifndef CardsUtil_hpp
#define CardsUtil_hpp

#include <stdio.h>
#include <vector>
#include <string>

//cards rank constants
//const int A = 1;
//const int J = 11;
//const int Q = 12;
//const int K = 13;
//card suit constants


struct Card{
    int rank;
    std::string suit;
};

//creating deck of cards with 52 inside
std::vector<Card> creatingDeckOfCards();

void printDeck(std::vector<Card> DeckofFiftyTwo);
    

#endif /* CardsUtil_hpp */
