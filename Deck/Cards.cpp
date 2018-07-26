#include <iostream>
#include "Cards.h"

Card::Card(int number, std::string suit) {
        card_number = number;        
        card_suit = suit;    
}

// ouput the card number and the suit
void Card::get_card() {
    if(card_number > 1 && card_number < 10) {
        std::cout << card_number;
    }
    else if(card_number >= 10 && card_number < 15) {
        switch(card_number) {
            case 10:
                std::cout << "10";
            break;
            
            case 11:
                std::cout << 'J';
            break;
            
            case 12:
                std::cout << 'Q';
            break;
            
            case 13:
                std::cout << 'K';
            break;
            
            case 14:
                std::cout << 'A';
            break;
        }
    }
    
    std::cout << " of " << card_suit << std::endl;
        
}

/* Card testing
int main() {
    
    Card *testCard = new Card(2, "Clubs"); // Test from 2-9
    testCard->get_card();
    
    Card *testCard2 = new Card(10, "Hearts"); // Test from 10-14
    testCard2->get_card();
    
    
    return 0;
}
*/