//
//  CardsUtil.cpp
//  Cards
//
//  Created by Aiden Pratt on 8/29/23.
//

#include "CardsUtil.hpp"
#include <iostream>

//creating a vector as data type "Card" and calling it creatingDeckOfCards
//setting another vector of data type "Card" calling it "returnDeck". this will be saved as a vector of the cards and the returned at the end of the function
//creating a string called suit with 4 strings in it (array?)
//for each loop which will have string "s" cycle through the suit [4] array and save each position as the suit of cards
//within each suit of cards, another for loop runs through 1 - 13 which updates the rank of the card.
//the function then pushses back each suit + rank of struct "newcard" into returnDeck.
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

//a void function to print the deck of cards in our desired order.
//creates a vector of datatype "Card" and calls it DeckofFiftyTwo
//then runs if else statements to print the rank of the cards, then at the bottom will print the suit of the cards followed by a new line
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
