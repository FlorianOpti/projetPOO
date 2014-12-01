#ifndef Placement
#define Placement

#include "Player.hpp"
#include "Pion.hpp"
#include "Phase.hpp"
#include "Game.hpp"


#include <iostream>



class Placement : Phase
{
public:
	void jouer ();
	void faire_jouer(Player joueur);

	Placement (Game g) {super(g);}

};
#endif
