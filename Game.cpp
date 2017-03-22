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


	Game::~Game()
	{
	}
