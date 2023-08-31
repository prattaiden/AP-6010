//
//  main.cpp
//  Cards
//
//  Created by Aiden Pratt on 8/29/23.
//

#include <iostream>
#include "CardsUtil.hpp"
#include "PokerUtil.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
    
    //making a vector of type Card called DeckofFifyTwo. setting it equal to creatingDeckOfCards.
    
    //time?
    srand(time(0));
   //counters
    int counterStraights = 0;
    int counterFlushes = 0;
    int counterStraightFlushes = 0;
    int counterFullHouses = 0;
    int counterRoyalFlush = 0;
    //this for loop should loop through a deck of cards
    //take 5 from the randomized shuffled deck
    //then loop through 1000x times
    //checking and counting how many times a Straight is hit
    //whole vectore to do the counting
    for(int a = 0; a < 100000; a++){
        std::vector<Card> DeckofFiftyTwo = creatingDeckOfCards();
        //function to run random
        shuffleTheDeck(DeckofFiftyTwo);
        //calling printDeck function
        //commented out so it does not print a deck 10000x times
        //printDeck(DeckofFiftyTwo);
        //COUNTstraights here
        countStraights(isItStraight(getFiveCards(DeckofFiftyTwo)), counterStraights);
        //COUNTflushes here
        countFlush(isItFlush(getFiveCards(DeckofFiftyTwo)), counterFlushes);
        //Count straightflushes here
        countStraightFlushes(isItStraightFlush(getFiveCards(DeckofFiftyTwo)), counterStraightFlushes);
        //Count FullHouses here
        countFullHouse(isItFullHouse(getFiveCards(DeckofFiftyTwo)), counterFullHouses);
        //count royalflushes here
        countRoyalFlush(isItRoyalFlush(getFiveCards(DeckofFiftyTwo)), counterRoyalFlush);
    }
    
    std::cout << "Straight count: " << counterStraights << "\n";
    //sometimes this will give 1 but most the times it is 0. probablity does not seem right. gave 5 when i did 10,000
    std::cout << "Flush count: " << counterFlushes << "\n";

    std::cout << "Straight Flush count: " << counterStraightFlushes << "\n";
    
    std::cout << "Full House count: " << counterFullHouses << "\n";
    
    std::cout << "Royal Flush count: " << counterRoyalFlush << "\n";
    
    //to do tests:
    //test assert is it a striaght. != staright (if it isnt)
    
    //test vector deck for  flush
    Card c1 = {3, "Clubs"};
    Card c2 = {1, "Clubs"};
    Card c3 = {5, "Clubs"};
    Card c4 = {11, "Clubs"};
    Card c5 = {4, "Clubs"};
    
    std::vector<Card> flushDeck{c1, c2, c3, c4, c5};
    
    isItFlush(flushDeck);
    
    
    //test vector deck for straight
    Card s1 = {4, "Clubs"};
    Card s2 = {5, "Diamonds"};
    Card s3 = {6, "Clubs"};
    Card s4 = {7, "Clubs"};
    Card s5 = {8, "Spades"};
    
    std::vector<Card> straightDeck{s1, s2, s3, s4, s5};
    
    isItStraight(straightDeck);
    
    //test vector for straight flush deck of 5
    Card f1 = {1, "Hearts"};
    Card f2 = {2, "Hearts"};
    Card f3 = {3, "Hearts"};
    Card f4 = {4, "Hearts"};
    Card f5 = {5, "Hearts"};
    
    std::vector<Card> straightFlushDeck{f1, f2, f3, f4, f5};
    
    isItStraightFlush(straightFlushDeck);
    
    //test vector for royal flush deck of 5
    Card r1 = {10, "Hearts"};
    Card r2 = {11, "Hearts"};
    Card r3 = {12, "Hearts"};
    Card r4 = {13, "Hearts"};
    Card r5 = {14, "Hearts"};
    
    std::vector<Card> royalFlushDeck{r1, r2, r3, r4, r5};
    
    isItRoyalFlush(royalFlushDeck);
                   
    //test vector for full house deck of 5
    Card a1 = {13, "Hearts"};
    Card a2 = {13, "Diamonds"};
    Card a3 = {14, "Spades"};
    Card a4 = {14, "Hearts"};
    Card a5 = {14, "Diamonds"};
    
    std::vector<Card> fullHouseDeck{a1, a2, a3, a4, a5};
    
    isItFullHouse(fullHouseDeck);
    
    
    return 0;
}







