
#ifndef Matrice_
#define Matrice_

#include "PionV.hpp"
#include "Pion.hpp"
#include "Color.hpp"
#include "FactoryPion.hpp"
#include<cassert>

//Gerer les constructeur de Pion


class Matrice
{
public:
	Matrice();
	~Matrice();

	bool setPion (Pion *pion, int position );
	bool estVide (int position);
	int indice(Pion *pion);
	Pion* pion(int x);
	bool LignePleine (int num_ligne,Colore color);
private :
	Pion* matr[24];
	FactoryPion* fac;
};

#endif
