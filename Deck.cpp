#include "Deck.h"
#include <vector>

Deck::Deck(){
	
}

void Deck::createDeck() {
	vector<Card> newDeck;
	
	for(int i=0; i<4; i++){
		for(int j=2; j<14; j++){
			if(i==0) Card card = new Card(SPADES, j);
			else if(i==1) Card card = new Card(CLUBS, j);
			else if(i==2) Card card = new Card(DIAMONDS, j);
			else if(i==3) Card card = new Card(HEARTS, j);
			newDeck.push_back(card);
			delete card;
		}
	}
}
