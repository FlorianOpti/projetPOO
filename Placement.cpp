#ifndef Placement
#define Placement
#include "Player.cpp"
#include "Matrice.cpp"
#include "Pion.cpp"
#include "Placement.cpp"
#include "Deplacement.cpp"
#include "Game.cpp"


class Phase;

class Placement : Phase 
{
public:
	void jouer ();
	
	Placement (Game g) {super(g);}	
	
};

	Placement::void jouer(){
		Joueur j1 = game.getJoueur1();
		Joueur j2 = game.getJoueur2();
		
		for(int i=0; i<9; ++i){
			j1.placer();
			j2.placer();
		}
	}


#endif
