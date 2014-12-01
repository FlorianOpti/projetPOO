


#ifndef _Game_
#define _Game_
#include "Player.hpp"
//#include "Phase.hpp"
class Phase;class Placement;class Deplacement;class FinDuJeu;
/*#include "Placement.hpp"
#include "Deplacement.hpp"*/
#include "Plateau.hpp"




class Game
{

public:
	void play ();
	Game();
	Player getJ1();
	Player getJ2();
	Plateau getPlateau();
	Phase* getPhaseDeplacement();
	Phase* getPhaseFinduJeu;
	void setPhase(Phase p);
protected:
	Player joueur1;
	Player joueur2;
	Plateau plateau;
	Phase *phaseCourante;
	Placement *phasePlacement;
	Deplacement *phaseDeplacement;
	FinduJeu *phaseFinduJeu;
};
#endif
