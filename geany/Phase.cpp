#ifndef _Phase_
#define _Phase_

#include "Deplacement.cpp"
#include "Placement.cpp"
#include "Game.cpp"

class Phase //(abstract)
{
public:
	virtual void jouer ()=0;
protected:
	Game game;

public : 
	Phase (Game g) : game(g) {} // ???
	
	
};

#endif

