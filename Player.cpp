#ifndef _Player_
#define _Player_

#include "Color.cpp"
#include<iostream>
using namespace std;


class Player
{
protected:
	Colore* couleur;
	int nbPion;
	
public:

	~Player(){}


	Player(){
		couleur = new Colore();
		nbPion = 0;
	
	}
	Player(Colore* c){
		couleur = c;
		nbPion = 9;
	}
	
	void affichage(){
		cout << "joueur de couleur ";
		couleur->affichage();
		cout << " avec nbPion = "<< nbPion << endl;
	}

};

int main(){
	Player a(new Colore(1,0)), b(new Colore(0,1));
	Player* c = new Player();
	//Player c(); marche pas trop ca j'ai l'impression
	a.affichage();
	b.affichage();
	c->affichage();
	return 0;
}

#endif


