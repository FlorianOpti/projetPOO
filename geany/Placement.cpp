#ifndef Placement
#define Placement

#include "Player.cpp"
#include "Phase.cpp"
#include "Matrice.cpp"
#include "Pion.cpp"
#include "Placement.cpp"
#include "Deplacement.cpp"
#include "Game.cpp"


#include <iostream>



class Placement : Phase 
{
public:
	void jouer ();
	void faire_jouer(Player joueur);
	
	Placement (Game g) {super(g);}	
	
};

void Placement::jouer(){
		Joueur j1 = game.getJoueur1();
		Joueur j2 = game.getJoueur2();
		
		for(int i=0; i<9; ++i){
			faire_jouer(j1);
			faire_jouer(j2);
		}
		game.setPhaseDeplacement();
		game.play();
	}
	
void Placement::faire_jouer(Player joueur)
{
	std::string choix;
	int i;
	joueur.arffichage();
	std::cout<<"Placer un pion à quelle position ? "<<std::endl;
	//----------------------------
	//---Obtention de la position où l'on veut ajouter notre pion
	//---et stockage de la couleur du pion déjà présent
	//---si il n'y a pas de pion posée par un joueur alors c'est un pion "vide"
	//----------------------------
	std::cin>>choix;
	i = atoi(choix.c_str());
	Colore col_atposition = game.getPlateau().getPion(i).getColore();
	
	//----------------------------
	//---Repétition : tant que le pion déjà présent a la position i n'est pas un pion vide
	//---on redemande une nouvelle position i
	//----------------------------
	while(!col_atposition.isVide())
		{
			std::cout<<"Vous ne pouvez pas ajouter ici, choissisez une autre position ! "<<std::endl;
			cin>>choix;
			j = atoi(choix.c_str());
			Colore col_atposition = game.getPlateau().getPion(i).getColore();
		}
	//----------------------------
	//---On pose le pion, en appelant placPion de plateau
	//---qui creer un pion de la couleur du joueur en parametre
	//----------------------------	
	game.getPlateau().placPion(joueur,j);

}


#endif
