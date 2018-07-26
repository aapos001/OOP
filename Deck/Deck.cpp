#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <time.h>
#include "Deck.h"

Deck::Deck() {
    std::string suit;
    for(int i = 0; i < 4; i++) { // For each suit
        for(int j = 2; j < 15; j++) { // For each card in each suit
            /*
            10 = 10
            11 = Jack
            12 = Queen
            13 = King
            14 = Ace
            */
            switch(i) {
                case 0:
                    suit = "Hearts";
                break;
                case 1:
                    suit = "Diamonds";
                break;
                case 2:
                    suit = "Spades";
                break;
                case 3:
                    suit = "Clubs";
                break;
            }
            deck.push_back(Card(j, suit));
        }                
    }
}
void Deck::deck_out() {
    for(int i = 0; i < deck.size(); i++) {
        deck[i].get_card();
    }
}

void Deck::shuffle() {
    srand(time(NULL)); // randomize the seed every time it is called
    int pos;
    for(int i = deck.size() - 1; i > 0; i--) {
        pos = rand() % i;
        iter_swap(deck.begin() + i, deck.begin() + pos);
    }
}

/* Test cases
int main() {
    
    Deck *testDeck = new Deck();
    testDeck->deck_out();
    
    std::cout << "\n------Shuffle------\n\n";
    
    testDeck->shuffle();
    testDeck->deck_out();
    return 0;
}
*/