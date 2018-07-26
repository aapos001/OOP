#include <iostream>
#include "Cards.h"
#include "Deck.h"

//http://www.math.uaa.alaska.edu/~afkjm/csce211/handouts/SeparateCompilation.pdf


int main() {
    
    Deck *testDeck = new Deck();
    testDeck->deck_out();
    
    std::cout << "\n------Shuffle------\n\n";
    
    testDeck->shuffle();
    testDeck->deck_out();
    return 0;
}