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


//struct called Card
struct Card{
    int rank;
    std::string suit;
};

//creating deck of cards with 52 inside
std::vector<Card> creatingDeckOfCards();

//declaration of function printDeck
void printDeck(std::vector<Card> DeckofFiftyTwo);


#endif /* CardsUtil_hpp */
