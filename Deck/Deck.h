#ifndef DECK_H_
#define DECK_H_
#include "Cards.h"
#include <vector>
/*
The deck consists of 52 Cards
There are 13 of each suit
*/

class Deck {
    protected:
        std::vector<Card> deck;
    public:
        Deck();
        void deck_out();
        void shuffle();
};

#endif