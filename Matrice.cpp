
#ifndef Matrice_
#define Matrice_

#include "Pion.cpp"
#include "Color.cpp"




class Matrice 
{
public:
	Matrice();
	~Matrice();
	Pion*[24] matr;
public :
	bool LignePleine (int num_ligne,Colore color);
};



Matrice::Matrice()
{
	while(i(0);i<8*3;++i)
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
		if (matr[num_Ligne*3].color.isBlack())
		{
			if (matr[num_Ligne*3+1].color.isBlack())
			{
				if (matr[num_Ligne*3+2].color.isBlack())
				{
					return true; 
				}
			}
		}
		return false;
	}
	if (color.isRed())
	{
		if (matr[num_Ligne*3].color.isRed())
		{
			if (matr[num_Ligne*3+1].color.isRed())
			{
				if (matr[num_Ligne*3+2].color.isRed())
				{
					return true; 
				}
			}
		}
		return false;
	}
	if (color.isVide())
	{
		if (matr[num_Ligne*3].color.isVide())
		{
			if (matr[num_Ligne*3+1].color.isVide())
			{
				if (matr[num_Ligne*3+2].color.isVide())
				{
					return true; 
				}
			}
		}
		return false;
	}
}



#endif
