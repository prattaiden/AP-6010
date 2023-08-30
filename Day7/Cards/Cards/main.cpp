//
//  main.cpp
//  Cards
//
//  Created by Aiden Pratt on 8/29/23.
//

#include <iostream>
#include "CardsUtil.hpp"

int main(int argc, const char * argv[]) {
    
    //making a vector of type Card called DeckofFifyTwo. setting it equal to creatingDeckOfCards.
    std::vector<Card> DeckofFiftyTwo = creatingDeckOfCards();
    
    //calling printDeck function
    printDeck(DeckofFiftyTwo);
    
    return 0;
}
