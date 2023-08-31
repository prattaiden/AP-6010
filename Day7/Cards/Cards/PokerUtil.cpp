//
//  PokerUtil.cpp
//  Cards
//
//  Created by Aiden Pratt on 8/30/23.
//

#include "PokerUtil.hpp"
#include "CardsUtil.hpp"
#include <vector>
#include <cstdlib>
#include <string>
#include <iostream>

void shuffleTheDeck (std::vector <Card>& newDeckOfCards){
    for (unsigned int i = 0 ; i < newDeckOfCards.size(); i++){
        int j = std::rand() % 52;
        
        
        Card temp = newDeckOfCards[i];
        newDeckOfCards[i] = newDeckOfCards[j];
        newDeckOfCards[j] = temp;
        
    }
}
//get5 cards
std::vector<Card> getFiveCards (std::vector<Card> topFiveCards){
    std::vector<Card> cards;
    for (int i = 0 ; i < 5; i++){
        int randomFive = std::rand()%52;
        Card c1 = topFiveCards[randomFive];
        cards.push_back(c1);
    }
    return topFiveCards;
}
                                                   
//ISTHEREAKING
//takes our hand and checks if a king is present
bool isThereKing (std::vector<Card> aceRank){
    for (int i = 0; i < aceRank.size(); i++){
        if(aceRank[i].rank == 13){
            return true;
            break;
        }
    }
    return false;
}

//SORTING
//sorts the cards
std::vector<int> sortRank (std::vector<Card> sortedHand){
    //make vector to sort rank numbers
    std::vector<int> sortedRanks;
    for(Card card : sortedHand){
        int rank = card.rank;
        
        //if card is an ace, and ace should be high, then change rank to 14
        if (rank==1 && isThereKing(sortedHand)){
            rank = 14;
        }
        //pushing back
        sortedRanks.push_back(rank);
    }
    //sorts the ranks lowest to high as an int
    std::sort(sortedRanks.begin(), sortedRanks.end());
        return sortedRanks;
}
               


//std::sort


//FLUSH bool and void to check if it is a flush
bool isItFlush (std::vector<Card>& flushDeck){
    for(int i = 1; i<5; i++){
        if (flushDeck[i-1].suit != flushDeck[i].suit){
            return false;
        }
    }
return true;
}

void checkFlushResult (std::vector<Card>& flushDeckTest){
    if (isItFlush(flushDeckTest)){
        std::cout << "It is a flush.\n";
    }
    else{
        std::cout << "It is not a flush.\n";
    }
}

//making a passthrough & function to count the number of flushes that occur
int countFlushes (bool flushCount , int& counterFlush){
    if(flushCount){
        counterFlush++;
    }
    return counterFlush;
}

//STRAIGHT bool to check if it is a straight
bool isItStraight (std::vector<Card> straightDeck){
    std::vector<int> handSort;
    for (int i = 1; i<5; i++){
        sortRank(straightDeck);
        if (straightDeck[i].rank != straightDeck[i-1].rank + 1){
            return false;
        }
    }
    return true;
}

void checkStraightResult (std::vector<Card>& straightDeckTest){
    if(isItStraight(straightDeckTest)){
        std::cout << "It is a straight.\n";
    }
    else{
        std::cout << "It is not a straight.\n";
    }
}

//straightflush bool
bool isItStraightFlush (std::vector<Card>& straightFlushDeck){
    if(isItStraight(straightFlushDeck) && (isItFlush(straightFlushDeck))){
        std::cout << "It is a straight flush.\n";
        return true;
    }
    else{
        std::cout << "It is not a straight flush.\n";
        return false;
    }
}

//royalflush test

bool isItRoyalFlush (std::vector<Card> royalFlushDeck){
    if(isItStraightFlush(royalFlushDeck) && royalFlushDeck[0].rank == 10 && royalFlushDeck[4].rank == 14){
        std::cout << "It is a royal flush.\n";
            return true;
        
        }
    
    else{
        std::cout << "It is not a royal flush.\n";
        return false;
    }
    

    }

bool isItFullHouse (std::vector<Card> fullHouseDeck){
    int secondCardPass = 1;
    int firstCardPass = 1;
    for (int i = 1 ; i < 5 ; i++ ){
        if (fullHouseDeck[0].rank == fullHouseDeck[i].rank) {
            firstCardPass++;
        }
    }
    for (int i = 3 ; i >= 0 ; i--){
        if (fullHouseDeck[4].rank == fullHouseDeck[i].rank){
            secondCardPass++;
        }
        
        if ((firstCardPass == 3 && secondCardPass == 2)|| (firstCardPass == 2 && secondCardPass == 3)){
            std::cout << "full\n";
            return true;
        }
    }
    std::cout << "not full\n";
    return false;
}




