#ifndef Placement
#define Placement

#include "Phase.cpp"
#include "Game.cpp"

class Placement : Phase 
{
public:
	void jouer ();
	
	Placement (Game g) {super(g);}	
	
	
};


#endif
