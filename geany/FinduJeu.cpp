#ifndef Placement
#define Placement

#include "Game.cpp"

#include <iostream>

class FinduJeu : Phase 
{
public:
	void jouer ();
	Placement (Game g) {super(g);}	
	
};


void FinduJeu::jouer()
{

	if (game.getJ2().getNbPion()>2)
	{
	std::cout<<" JOUEUR 2 VICTORIEUX"<<std::endl; 
	}
	if (game.getJ1().getNbPion()>2)
	{
	std::cout<<" JOUEUR 1 VICTORIEUX"<<std::endl; 
	}

}




#endif
