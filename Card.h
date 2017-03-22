#pragma once
#include <string>

class Card {

	const char HEARTS = 'h';
	const char DIAMONDS = 'd';
	const char SPADES = 's';
	const char CLUBS = 'c';

private:
	int value;
	char suit;

public:
	int getValue();
	char getSuit();
	void setValue(int v);
	void setSuit(char s);
	char convertFaceCards(char s);
	Card();
	~Card();

};

