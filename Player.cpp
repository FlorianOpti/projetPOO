#ifndef Player
#define Player

#include "Color.cpp"
#include<iostream>
using namespace std;


class Playere
{
protected:
	Colore* couleur;
	int nbPion;
	
public:

	~Playere(){}


	Playere(){
		couleur = new Colore();
		nbPion = 0;
	
	}
	Playere(Colore* c){
		couleur = c;
		nbPion = 9;
	}
	
	void affichage(){
		cout << "joueur de couleur "; couleur.affichage();
		cout << " avec nbPion = "<< nbPion << endl;
	}

};

int main(){
	Playere a(new Colore(1,0)), b(new Colore(0,1));
	a.affichage();
	b.affichage();
	return 0;
}

#endif


