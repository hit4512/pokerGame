#pragma once
class Player {
public:
	bool isGambler();
	bool isSkilled();
	bool isDrunk();
	int getChips();
	bool isDealer();
	bool isInHand();
	int getPosition();
	bool isHuman();
	bool isAllIn();
	int getSuspicionLevel();
	bool getFirstToAct();

	void setGambler(bool t);
	void setSkill(bool t);
	void setDrunk(bool t);
	void setChips(int t);
	void setIsDealer(bool t);
	void setIsInHand(bool t);
	void setPosition(int t);
	void setIsHuman(bool t);
	void setIsAllIn(bool t);
	void setSuspicionLevel(int t);
	void setFirstToAct(bool t);

	Player(bool, bool, bool, int, bool, bool, int, bool, bool, int, bool /*,cardHand*/);
	~Player();

private:
	bool gambler;
	bool skilled;
	bool drunk;
	int chips;
	bool dealer;
	bool inHand;
	int position;
	bool human;
	bool allIn;
	// CardHand cardHand;
	int suspicionLevel;
	bool firstToAct;

};