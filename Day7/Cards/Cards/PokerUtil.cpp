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

//a void function that shuffles the deck
//this function takes in input of a Card type called newDeckOfCards
//goes through a for loop and assigns int j to a random number %52
void shuffleTheDeck (std::vector <Card>& newDeckOfCards){
    for (unsigned int i = 0 ; i < newDeckOfCards.size(); i++){
        int j = std::rand() % 52;
        
        
        Card temp = newDeckOfCards[i];
        newDeckOfCards[i] = newDeckOfCards[j];
        newDeckOfCards[j] = temp;
        
    }
}
//get5 cards
//makes a new vector from the sorted cards
std::vector<Card> getFiveCards (std::vector<Card> topFiveCards){
    std::vector<Card> cards;
    for (int i = 0 ; i < 5; i++){

        Card c1 = topFiveCards[i];
        cards.push_back(c1);
    }
    
    return cards;
}
                                                   
//ISTHEREAKING
//takes our hand and checks if a king is present
//a king .rank value is equal to 13
//this will later be used when looking at royals and a will be changed to 14
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
        //pushing back into the deck
        sortedRanks.push_back(rank);
    }
    //sorts the ranks lowest to high as an int
    std::sort(sortedRanks.begin(), sortedRanks.end());
        return sortedRanks;
}
    
//COUNTERS for each of our poker hands:
//making a passthrough & function to count the number of straights that occur
int countStraights (bool straightCount , int& counterStraights){
    if(straightCount){
        counterStraights++;
    }
    return counterStraights;
}

//making a passthrough & function to count the number of floats that occur
int countFlush (bool flushCount , int& counterFlushes){
    if(flushCount){
        counterFlushes++;
    }
    return counterFlushes;
}

int countStraightFlushes (bool straightFlushCount , int& counterStraightFlush){
    if(straightFlushCount){
        counterStraightFlush++;
    }
    return counterStraightFlush;
}

int countFullHouse (bool fullHouseCount , int& counterFullHouse){
    if(fullHouseCount){
        counterFullHouse++;
    }
    return counterFullHouse;
}

int countRoyalFlush (bool royalFlushCount , int& counterRoyalFlush){
    if(royalFlushCount){
        counterRoyalFlush++;
    }
    return counterRoyalFlush;
}


//FLUSH bool and void to check if it is a flush
//for loop that looks at the suit of position i-i and compares it to i
//if they are not equal returns false, else returns true
bool isItFlush (std::vector<Card> flushDeck){
    for(int i = 1; i<5; i++){
        if (flushDeck[i-1].suit != flushDeck[i].suit){
            return false;
        }
    }
    return true;
}

//STRAIGHT bool to check if it is a straight
//for loop to compare i-1 of the sorted hand and i of the sorted hand
//if [i-1] + 1 does not equal i, then it returns false, not meeting straight conditions
bool isItStraight (std::vector<Card> straightDeck){
    std::vector<int> handSort = sortRank(straightDeck);
    
    for (int i = 1; i<5; i++){
        if (handSort[i-1]+1 != handSort[i]){
            return false;
        }
    }
    return true;
}

//straightflush bool
//taking the functions from is it a straight and is it a flush
//if they are both true, then it returns true
bool isItStraightFlush (std::vector<Card> straightFlushDeck){
    if(isItStraight(straightFlushDeck) && (isItFlush(straightFlushDeck))){
        return true;
    }
    else{
        return false;
    }
}

//royalflush test
//
bool isItRoyalFlush (std::vector<Card> royalFlushDeck){
    //sortRank(royalFlushDeck);
    std::vector<int> sorted = sortRank(royalFlushDeck);
    /*this if statement checks if there is a striaght flush from the abovec function.
     it then checks if the lowest rank is 10 and the highest rank is 14. if this is true then it means there is a royal flush*/
    if(isItStraightFlush(royalFlushDeck) && sorted[0] == 10 && sorted[4] == 14){

            return true;
        
        }
        return false;
    }

//function to check if it is a full house
bool isItFullHouse (std::vector<Card> fullHouseDeck){
    //declaring variables to count how many times a card in the hand is equal to the next card
    int secondCardRank = 0;
    int firstCardRank = fullHouseDeck[0].rank;
    /*this for loop iterates through the size of the full house starting with the second card in the hand. it checks if the rank of the second card is not equal to the first card in the hand. If that is true, the variable seconddCardRank is set to equal the rank of that position in the deck */
    for (int i = 1; i < fullHouseDeck.size(); i ++){
        if (fullHouseDeck[i].rank != firstCardRank){
            secondCardRank = fullHouseDeck[i].rank;
        }
    }
    int cardCounterTwo = 0;
    int cardCounterOne = 0;
    
    for (int i = 0; i <fullHouseDeck.size(); i++){
        if (firstCardRank == fullHouseDeck[i].rank){
            cardCounterOne++;
        }
        else if (secondCardRank == fullHouseDeck[i].rank){
            cardCounterTwo++;
        }
    }
    
    //checking if the counters suits equal to 3 and 2. if so it is a full house
    if ((cardCounterOne == 3 && cardCounterTwo == 2)|| (cardCounterOne == 2 && cardCounterTwo == 3)){
            return true;
        }
    return false;
    }




