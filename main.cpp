#include "Card.h"
#include <iostream>

void createDeck() {
	
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
	
	createDeck();
	return 0;
}
