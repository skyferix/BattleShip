#pragma once
#include "Ships.h"
#include "Player.h"
class Computer: public Ships
{
public:
	//konstructor
	Computer();
	//acess point
	bool attack(Ships& gamer);	
public:		//options
	bool advancedAttack = false;
private:
	bool continueAttack;
	int attackStage;

	int x, y, x2, y2;
	bool downright;

	
};

