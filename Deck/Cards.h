#ifndef CARDS_H_
#define CARDS_H_

/*
Cards have one number and one suit
suits are clubs, diamonds, hearts, spades
*/


class Card {
    protected:
        int card_number;
        std::string card_suit;
    public:
        Card(int number, std::string suit);
        void get_card();
};

#endif 