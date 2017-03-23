#include "Card.h"
#include <string>
#include <vector>
#include <iostream>

Card::Card(SUIT s, int v) {
	value = v;
	suit = s;
}


Card::Card(){
	value = 0;
	suit = SPADES;
}

int Card::getValue() {
	return value;
}

SUIT Card::getSuit() {
	return suit;
}

void Card::setSuit(SUIT s) {
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

//string Card::toString(){
	
//}

void Card::createDeck() {
	
	std::vector <Card> newDeck(52);
	
	for(int i=0; i<4; i++){
		for(int j=2; j<14; j++){
			Card* card;
			card = new Card(SPADES, 2);
			if(i==0){
				std::cout << "gets here";
				card->setSuit(SPADES);
				card->setValue(j);
				delete card;
			}
			else if(i==1){
				card->setSuit(CLUBS);
				card->setValue(j);
				delete card;
			}
			if(i==2){
				card->setSuit(DIAMONDS);
				card->setValue(j);
				delete card;
			}
			if(i==3){
				card->setSuit(HEARTS);
				card->setValue(j);
				delete card;
			}
			else{
				delete card;	
			}
			
			
		}
	}
}

int main(){
	Card::createDeck();
	return 0;
}
