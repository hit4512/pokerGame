#pragma once
#include "Card.h"
#include "Player.h"
#include <vector>

class Deck {
private:
	vector <Card> deck;

public:
	Deck();
	void createDeck();
	void shuffle();
	void dealCards();
	void dealFlop();
	void dealTurn();
	void dealRiver();
	
};
