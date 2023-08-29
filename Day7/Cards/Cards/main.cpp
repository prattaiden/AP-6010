//
//  main.cpp
//  Cards
//
//  Created by Aiden Pratt on 8/29/23.
//

#include <iostream>
#include "CardsUtil.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::vector<Card> DeckofFiftyTwo = creatingDeckOfCards();
    
    printDeck(DeckofFiftyTwo);
    
    return 0;
}
