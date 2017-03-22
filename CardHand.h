#pragma once
#include "Card.h"

class CardHand() {
private:
	int handStrength;
	Card card1;
	Card card2;
	
public:

	Card getCard1();
	Card getCard2();

	void setCard1(Card c);
	void setCard2(Card c);

	void assertHandStrength();

	CardHand();
	~CardHand();

};