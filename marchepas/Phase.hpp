#pragma once
#ifndef _Phase_
#define _Phase_

#include "Game.hpp"
//class Game;

class Phase //(abstract)
{
public:
	virtual void jouer ()=0;
protected:
	Game game;

public :
	Phase (Game g);


};

#endif

