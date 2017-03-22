#pragma once
#include <string>

enum Suit{HEARTS, DIAMONDS, SPADES, CLUBS};

class Card {
private:
	int value;
	char suit;

public:
	int getValue();
	Suit getSuit();
	void setValue(int v);
	void setSuit(Suit s);
	char convertFaceCards(Suit s);
	Card(Suit, int);
	~Card();

};

