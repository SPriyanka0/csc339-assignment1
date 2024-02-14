
#include "card.h"
#include <stdlib.h>
//constructor
card::card(int nCards, char suits, char cardValue) {
	this->nCards = nCards;
	const char* suits[4] = { "Club" , "Diamond" , "Heart", "Spade" };
	const char* cardValue[13] = { "Ace", "2" , "3" , "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
}


//deconstructor for completeness
card::~card() {

}

