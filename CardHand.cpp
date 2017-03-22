#include "CardHand.h"

CardHand::CardHand(Card c1, Card c2) {
	card1 = c1;
	card2 = c2;
	handStrength = 0;
}

void CardHand::assertHandStrength() {
	//TODO Assert hand strength and assign int value at evert phase of game
}

Card CardHand::getCard1() {
	return card1;
}

Card CardHand::getCard2() {
	return card2;
}

void CardHand::setCard1(Card c) {
	card1 = c;
}

void CardHand::setCard2(Card c) {
	card2 = c;
}

