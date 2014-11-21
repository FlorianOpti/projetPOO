#ifndef _Game_
#define _Game_



#include "Player.cpp"
#include "Phase.cpp"
#include "Plateau.cpp"



/*(NULL)*/
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
		//bool gameover = false ;
		
		/*for (int i(0); i<=8; ++i)
		{
			phaseCourante.jouer(); 
		}*/
		//phaseCourante = phaseDeplacement;			
		//while (!gameover)
		//{
		phaseCourante.jouer();
			//udpdate(gameover);
			//if (joueur1.getnbPion() > 2 && joueur2.getnbPion() > 2)// le deuxieme joueur peut jouer si il a perdu mais pas grave
			//{
			//	gameover=true;
			//}
		}
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
