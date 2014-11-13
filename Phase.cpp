#ifndef _Phase_
#define _Phase_

#include "Game.cpp"

class Phase //(abstract)
{
public:
	void jouer ();
protected:
	Game game;

public : 
	Phase (Game g) : game(g) {}
};

#endif

