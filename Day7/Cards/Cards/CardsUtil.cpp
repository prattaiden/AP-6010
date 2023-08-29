//
//  CardsUtil.cpp
//  Cards
//
//  Created by Aiden Pratt on 8/29/23.
//

#include "CardsUtil.hpp"
#include <iostream>


std::vector<Card> creatingDeckOfCards(){
    std::vector<Card> returnDeck;
    std::string suit[4] {"Clubs " , "Diamonds " , "Spades " , "Hearts "};
    for (std::string s: suit){
        for (int j = 1; j <= 13; j++){
            Card newcard;
            newcard.rank=j;
            newcard.suit=s;
            returnDeck.push_back(newcard);
        }
    }
    return returnDeck;
}

void printDeck(std::vector<Card> DeckofFiftyTwo){
    for(Card c: DeckofFiftyTwo){
        if( c.rank == 1){
            std::cout << "Ace of ";
        }
        else if (c.rank == 11){
            std::cout << "Jack of ";
        }
        else if (c.rank == 12){
            std::cout << "Queen of ";
        }
        else if (c.rank == 13){
            std::cout << "King of ";
        }
        else{
            std::cout << c.rank << " of ";
        }
        std::cout << c.suit << "\n";
    }
}
