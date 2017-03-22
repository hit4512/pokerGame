#include "Card.h"
#include <string>

Card::Card(Suit s, int v) {
	value = v;
	suit = s;
}

int Card::getValue() {
	return value;
}

Suit Card::getSuit() {
	return suit;
}

void Card::setSuit(Suit s) {
	suit = s;
}

void Card::setValue(int v) {
	value = v;
}

char Card::convertFaceCards(int v) {
	if (v < 10) return v;
	else if (v == 10) return 'T';
	else if (v == 11) return 'J';
	else if (v == 12) return 'Q';
	else if (v == 13) return 'K';
}
