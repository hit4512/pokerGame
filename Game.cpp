#include "Game.h"

	Game::Game(int betAmnt, int bBlind, int dealerPos, int firstAct, int betMin, int raiseMin, int xphase, int xplayersInHand, int posAct, int xPot, int prevBet, int smBlind, int startChips)
	{
		betAmount = betAmnt;
		bigBlind = bBlind;
		dealerPosition = dealerPos;
		firstToAct = firstAct;
		minBet = betMin;
		minRaise = raiseMin;
		phase = xphase;
		playersInHand = xplayersInHand;
		positionToAct = posAct;
		pot = xPot;
		previousBet = prevBet;
		smallBlind = smBlind;
		startingChips = startChips;

	}

	int Game::getNumPlayers(){
		return numPlayers;
	}

	int Game::getStartingChips() {
		return startingChips;
	}

	int Game::getBigBlind() {
		return bigBlind;
	}

	int Game::getSmallBlind() {
		return smallBlind;
	}

	int Game::getPhase() {
		return phase;
	}

	int Game::getFirstToAct() {
		return firstToAct;
	}

	int Game::getDealerPosition() {
		return dealerPosition;
	}

	int Game::getPreviousBet() {
		return previousBet;
	}

	int Game::getPot() {
		return pot;
	}

	int Game::getPositionToAct() {
		return positionToAct;
	}

	int Game::getMinRaise() {
		return minRaise;
	}

	int Game::getMinBet() {
		return minBet;
	}

	int Game::getBetAmount() {
		return betAmount;
	}

	int Game::getPlayersInHand() {
		return playersInHand;
	}

	void Game::setNumPlayers(int newNumPlayers){
		numPlayers = newNumPlayers;
	}
	
	void Game::setStartingChips(int newStartChips){
		startingChips = newStartChips;
	}
	
	void Game::setBigBlind(int newBigBlind){
		bigBlind = newBigBlind;
	}
	
	void Game::setSmallBlind(int newSmallBlind){
		smallBlind = newSmallBlind;
	}
	
	void Game::setPhase(int newPhase){
		phase = newPhase;
	}
	
	void Game::setFirstToAct(int newFirstAct){
		firstToAct = newFirstAct;
	}
	
	void Game::setDealerPosition(int newDealerPos){
		dealerPosition = newDealerPos;
	}
	
	void Game::setPreviousBet(int newPrevBet){
		previousBet = newPrevBet;
	}
	
	void Game::setPot(int newPot){
		pot = newPot;
	}
	
	void Game::setPositionToAct(int newPosToAct){
		positionToAct = newPosToAct;
	}
	
	void Game::setMinRaise(int newMinRaise){
		minRaise = newMinRaise;
	}
	
	void Game::setMinBet(int newMinBet){
		minBet = newMinBet;
	}
	
	void Game::setBetAmount(int newBetAmnt){
		betAmount = newBetAmnt;
	}
	
	void Game::setPlayersInHand(int newPlayersInHand){
		playersInHand = newPlayersInHand;
	}
		
	Game::~Game()
	{
		
	}
