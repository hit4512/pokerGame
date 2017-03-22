#include "Player.h"

Player::Player(bool gamb, bool skill, bool newdrunk, int newchip, bool newDeal, bool newinhand, int pos, bool ishum, bool isAll, int susp, bool firstAct) {
	gambler = gamb;
	skilled = skill;
	drunk = newdrunk;
	chips = newchip;
	dealer = newDeal;
	inHand = newinhand;
	position = pos;
	human = ishum;
	allIn = isAll;
	suspicionLevel = susp;
	firstToAct = firstAct;
}

bool Player::isGambler() {
	return gambler;
}

bool Player::isSkilled() {
	return skilled;
}

bool Player::isDrunk() {
	return drunk;
}

int Player::getChips() {
	return chips;
}

bool Player::isDealer() {
	return dealer;
}

bool Player::isInHand() {
	return inHand;
}

int Player::getPosition() {
	return position;
}

bool Player::isHuman() {
	return human;
}

bool Player::isAllIn() {
	return allIn;
}

int Player::getSuspicionLevel() {
	return suspicionLevel;
}

bool Player::getFirstToAct() {
	return firstToAct;
}

void Player::setGambler(bool t) {
	gambler = t;
}

void Player::setSkill(bool t) {
	skilled = t;
}

void Player::setDrunk(bool t) {
	drunk = t;
}

void Player::setChips(int t) {
	chips = t;
}

void Player::setIsDealer(bool t) {
	dealer = t;
}

void Player::setIsInHand(bool t) {
	inHand = t;
}

void Player::setPosition(int t) {
	position = t;
}

void Player::setIsHuman(bool t) {
	human = t;
}

void Player::setIsAllIn(bool t) {
	allIn = t;
}

void Player::setSuspicionLevel(int t) {
	suspicionLevel = t;
}

void Player::setFirstToAct(bool t) {
	firstToAct = t;
}