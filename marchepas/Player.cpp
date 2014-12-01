#include "PLayer.hpp"

	~Player(){}


	Player(){
		couleur = *(new Colore());
		nbPion = 0;

	}
	Player(Colore c){
		couleur = c;
		nbPion = 9;
	}

	void affichage(){
		cout << "joueur de couleur ";
		couleur.affichage();
		cout << " avec nbPion = "<< nbPion << endl;
	}

	int getNbPion ()
	{
		return nbPion;
	}

	void perdrePion ()
	{
		nbPion--;
	}

	Colore getColore()
	{
		return couleur;
	}




