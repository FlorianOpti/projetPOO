#ifndef _Deplacement_
#define _Deplacement_

#include "Phase.cpp"
#include "Game.cpp"
#include <iostream>


class Deplacement : Phase 
{
public:
	void jouer ();
	Deplacement(Game g) {super(g);}
};


void Deplacement::jouer()
{
	std::cout<<"Phase de déplacement "<<std::endl;
	int nb1 = game.joueur1.getNbPion();
	int nb2 = game.joueur2.getNbPiob();
	int i;
	string choix;
	bool still_not_move = true ;
	while((nb1>2) && (nb2>2))
	{
		still_not_move = true ;
		while (still_not_move)
		{
			std::cout<<"Joueur 1 : "<<std::endl;
			std::cout<<"Quel pion a deplacer ? "<<std::endl;
			std::cin>>choix;
			i = atoi(choix.c_str());
			if(!getDown(i) && !getRight(i) && !getLeft(i) !getRight(i))
			{
				std::cout<<"Pion impossible a déplacer"<<std::endl;		
			}
			else 
			{
					std::cout<<"droite, gauche, haut, bas ou retour ?"<<std::endl;
					cin>>choix;
					switch(choix)
					{
					case "droite":
					
					
					
			}
		}
	}







}





#endif
