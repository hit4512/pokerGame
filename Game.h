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

	void setNumPlayers();
	void setStartingChips();
	void setBigBlind();
	void setSmallBlind();
	void setPhase();
	void setFirstToAct();
	void setDealerPosition();
	void setPreviousBet();
	void setPot();
	void setPositionToAct();
	void setMinRaise();
	void setMinBet();
	void setBetAmount();
	void setPlayersInHand();

};

