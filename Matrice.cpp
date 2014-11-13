
#ifndef Matrice_
#define Matrice_

#include "Pion.cpp"
#include "Color.cpp"

//Gerer les constructeur de Pion


class Matrice 
{
public:
	Matrice();
	~Matrice();
	Pion* matr[24];
public :
	bool LignePleine (int num_ligne,Colore color);
};



Matrice::Matrice()
{
	int i;
	for(i=0; i<24; ++i)
	{
		matr[i] = new Pion();
	}
}

Matrice::~Matrice()
{
}

bool Matrice::LignePleine (int num_Ligne,Colore color)
{
	if (color.isBlack())
	{
		if (matr[num_Ligne*3].getColore.isBlack())
		{
			if (matr[num_Ligne*3+1].getColore.isBlack())
			{
				if (matr[num_Ligne*3+2].getColore.isBlack())
				{
					return true; 
				}
			}
		}
		return false;
	}
	if (color.isRed())
	{
		if (matr[num_Ligne*3].getColore.isRed())
		{
			if (matr[num_Ligne*3+1].getColore.isRed())
			{
				if (matr[num_Ligne*3+2].getColore.isRed())
				{
					return true; 
				}
			}
		}
		return false;
	}
	if (color.isVide())
	{
		if (matr[num_Ligne*3].getColore.isVide())
		{
			if (matr[num_Ligne*3+1].getColore.isVide())
			{
				if (matr[num_Ligne*3+2].getColore.isVide())
				{
					return true; 
				}
			}
		}
		return false;
	}
}



#endif
