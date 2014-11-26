#ifndef _Deplacement_
#define _Deplacement_


#include <iostream>
#include "Game.cpp"
#include "Phase.cpp"






class Deplacement : Phase 
{
public:
	void jouer ();
	void faire_jouer(Player joueur);
	Deplacement(Game g) {super(g);}
};


void Deplacement::jouer()
{
	std::cout<<"Phase de déplacement "<<std::endl;
	//----------------------------
	//---Tant que les deux joueur ont chacun plus de 2 pion
	//---on fait les fais jouer 1 par 1
	//---leurs nombres de pion observe plateau qui sera modifier dans faire_jouer
	//----------------------------
	while(game.getJ2().getNbPion()>2 && game.getJ1().getNbPion()>2)
	{
		faire_jouer(game.getJ1());
		faire_jouer(game.getJ2());
	}
	//----------------------------
	//---On a plus qu'a afficher le vainqueur
	//---donc celui qui a plus de 2 pion
	//----------------------------
	game.setPhaseFinduJeu();
	game.jouer();
	
	
}




void Deplacement::faire_jouer(Player joueur)
{	
	int d,u,r,l; 						//contenant les entier renvoyer par getDown(i), getRight(i), ... de game.getPlateau(). U = up, D = down,....
	string choix;						//le choix a chaque std::cin
	int i,j;     						//i position du pion a deplacer, j pion a supprimer
	still_not_move = true ;			//indique si le joueur a effectuer son deplacement
	while (still_not_move)
	{
		//----------------------------
		//----Obtention du pion a deplacer
		//----------------------------
		joueur.affichage();
		std::cout<<"Quel pion a deplacer ? "<<std::endl;
		std::cin>>choix;
		i = atoi(choix.c_str());
		//----------------------------
		//-----Stockage des valeurs des possibles deplacement du pion
		//----------------------------
		r=game.getPlateau().getRight(i);
		l=game.getPlateau().getLeft(i);
		u=game.getPlateau().getUp(i);
		d=game.getPlateau().getDown(i);
		//----------------------------
		//----Test si le pion peut au moin etre depalcer
		//----------------------------
		if(u==-1 && d==-1 && r==-1 && l==-1)
		{
			std::cout<<"Pion impossible a déplacer"<<std::endl;		
		}
		//----------------------------
		//-----Sinon, demander le choix de deplacement, toute valeurs, non présente, revient a recommencer la boucle a partir du choix de pion
		//----------------------------
		else 
		{
				std::cout<<"droite, gauche, haut, bas ou retour ?"<<std::endl;
				cin>>choix;
				//----------------------------
				//---Si direction_choisie revient a deplacer vers un choix invalide (resultat du getRight par exemple)
				//---alors affichage d'un message d'impossiblité, pas de deplacement, on retourne a la boucle à choix de pion
				//---sinon on deplace le pion, on indique a still_not__move qu'on a effectuer le deplacement, on deplace le pion dans le plateau
				//--et on attribut les coordonné du nouveau pion a la variable i pour tester ensuite le cas des tois aligné
				//----------------------------
				switch(choix)
				{
					case "droite":
					{
						if(r==-1)
						{
							std::cout<<"Pion impossible a déplacer dans cette direction"<<std::endl;
						}
						else 
						{	
							still_not_move = false;
							game.getPlateau().dep(i,r);
							i = r;
						}	
						break;
					}
					case "gauche":
					{
						if(l==-1)
						{
							std::cout<<"Pion impossible a déplacer dans cette direction"<<std::endl;
						}
						else 
						{
							still_not_move = false;
							game.getPlateau().dep(i,l);
							i = l;
						}
						break;
					}
					case "haut":
					{	
						if(u==-1)
						{
							std::cout<<"Pion impossible a déplacer dans cette direction"<<std::endl;
						}
						else 
						{
							still_not_move = false;
							game.getPlateau().dep(i,u);
							i = u;
						}
						break;
					}
					case "bas":
					{	
							if(d==-1)
						{
							std::cout<<"Pion impossible a déplacer dans cette direction"<<std::endl;
						}
						else 
							{
							still_not_move = false;
							game.getPlateau().dep(i,d);
							i = d;
							
						}
						break;
					}
				}
			}
		}
	//----------------------------
	//---Le pion a été déplacé, et i contient la nouvelle coordonée
	//----------------------------
	//---On test si le deplacment du pion a completer une ligne de 3
	//----------------------------
	if(game.getPlateau().LignePleine(i) || game.getPlateau().ColonnePleine(i))
	{
	//----------------------------
	//---Si oui, on peut supprimer un pion adverse
	//---On recupere donc le pion a supprimer, et on le supprime
	//----------------------------
		std::cout<<"Vous pouvez supprimer un pion, quel position ? "<<std::endl;
		cin>>choix;
		j = atoi(choix.c_str());
		Colore a_supp = game.getPlateau().getPion(j).getColore(); //Contient la couleur du pion a suppirmer
		//----------------------------
		//---Boucle while, qui repete le demande de la position du pion a supprimer
		//---a l'utilisateur tant que ce pion est de la meme couleur que le joueur ou
		//---que c'est un pion vide
		//----------------------------
		while(a_supp.isEqual(joueur.getColore()) || (a_supp.isVide()))
		{
			std::cout<<"Vous ne pouvez pas supprimer ce pion, prenez en un autre ! "<<std::endl;
			cin>>choix;
			j = atoi(choix.c_str());
			Colore a_supp = game.getPlateau().getPion(j).getColore(); 
		}	
		game.getPlateau().suppPion(j);
		
	}
}
	






#endif
