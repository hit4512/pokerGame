#pragma once
#include <iostream>
#include <string>

class Game
{
private:
	int numPlayers;
	int startingChips;
	int bigBlind;
	int smallBlind;
	//Deck deck;
	int phase;
	int firstToAct;
	int dealerPosition;
	int previousBet;
	int pot;
	int positionToAct;
	int minRaise;
	int minBet;
	int betAmount;
	int playersInHand;

public:
	int getNumPlayers();
	int getStartingChips();
	int getBigBlind();
	int getSmallBlind();
	int getPhase();
	int getFirstToAct();
	int getDealerPosition();
	int getPreviousBet();
	int getPot();
	int getPositionToAct();
	int getMinRaise();
	int getMinBet();
	int getBetAmount();
	int getPlayersInHand();
	Game(int, int, int, int, int, int, int, int, int, int, int, int, int);
	~Game();

	void setNumPlayers(int newNumPlayers);
	void setStartingChips(int newStartingChips);
	void setBigBlind(int newBigBlind);
	void setSmallBlind(int newSmallBlind);
	void setPhase(int newPhase);
	void setFirstToAct(int newFirstAct);
	void setDealerPosition(int newDealer);
	void setPreviousBet(int newPrevBet);
	void setPot(int newPot);
	void setPositionToAct(int newPositionAct);
	void setMinRaise(int newMinRaise);
	void setMinBet(int newMinBet);
	void setBetAmount(int newBetAmount);
	void setPlayersInHand(int newPlayersHand);

	void startGame();
	void runBetLoop(firstToAct);

};

