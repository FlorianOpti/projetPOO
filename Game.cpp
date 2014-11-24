

#ifndef _Game_
#define _Game_



class Game 
{

public:
	void Play ();
protected:
	Player joueur1;
	Player joueur2;
	Plateau plateau;
	Phase phaseCourante;
	Placement phasePlacement;
	Deplacement phaseDeplacement;


public :
	Game () 
	{
		joueur1 = new Player(new Color(1,0));
		joueur2 = new Player(new Color(0,1));
		plateau = new Plateau();
		phaseDeplacement = new Deplacement(this);
		phasePlacement = new Placement(this);
		phaseCourante = phasePlacement;
	} 
	
	void play () 
	{
		phaseCourante.jouer();
	}
	Player getJ1(){
		return joueur1;
	}
	Player getJ2(){
		return joueur2;
	}
	Plateau getPlateau(){
		return plateau;
	}
	
};

#endif
