#ifndef _Deplacement_
#define _Deplacement_


#include <iostream>
#include "Game.hpp"
#include "Phase.hpp"






class Deplacement : Phase
{
public:
	void jouer ();
	void faire_jouer(Player joueur);
	Deplacement(Game g) {super(g);}
};
#endif // _Deplacement_
