#ifndef Player_
#define Player_

#include "Color.hpp"
#include<iostream>
using namespace std;


class Player
{
protected:
	Colore couleur;
	int nbPion;

public:
  Player(Colore c);
  ~Player();
  void affichage();
  int getNbPion();
  void perdrePion ();
  Colore getColore();

};

#endif
/*
git pull
git commit -am "truc"
git push
*/
