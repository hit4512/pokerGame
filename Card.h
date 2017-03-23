#pragma once
#include <string>
#include <vector>

enum SUIT{HEARTS, DIAMONDS, SPADES, CLUBS};

class Card {
private:
	int value;
	SUIT suit;
	vector<Card> deck = new vector();

public:
	int getValue();
	SUIT getSuit();
	void setValue(int v);
	void setSuit(SUIT s);
	char convertFaceCards(int v);
	Card(SUIT s, int v);
	Card();
	//string toString();
	void createDeck();
	int main();
};

