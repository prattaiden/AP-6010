//
//  PokerUtil.hpp
//  Cards
//
//  Created by Aiden Pratt on 8/30/23.
//

#ifndef PokerUtil_hpp
#define PokerUtil_hpp
#include <vector>
#include <stdio.h>
#include "CardsUtil.hpp"
#include <algorithm>
#include <string>

void shuffleTheDeck (std::vector <Card>& newDeckOfCards);

bool isItFlush (std::vector <Card>& flushDeck);
    
void checkFlushResult (std::vector<Card>& flushDeckTest);

bool isItStraight (std::vector<Card> straightDeck);

void checkStraightResult (std::vector<Card>& straightDeckTest);

bool isItStraightFlush (std::vector<Card>& straightFlushDeck);

bool isItRoyalFlush (std::vector<Card> royalFlushDeck);

bool isItFullHouse (std::vector<Card> fullHouseDeck);

std::vector<Card> getFiveCards (std::vector<Card> topFiveCards);

bool isThereKing (std::vector<Card> aceRank);

std::vector<int> sortRank (std::vector<Card> sortedHand);

int countFlushes (bool flushCount , int& counterFlush);


#endif /* PokerUtil_hpp */
