#ifndef Plateau
#define Plateau

#include "Matrice.cpp"




class Plateau 
{
protected:
	Matrice matriceH;
	Matrice matriceV;
	
public:

	Plateau();
	~Plateau();
	
	
	Plateau(){
		matriceH = new Matrice();
		matriceV = new Matrice();
	}	
	depRight(Pion p){
		// si on peut se deplacer a droite ( une case a droite et innocuppée)
	}
	depLeft(Pion p);
	depUp(Pion p);
	depDown(Pion p);
};


#endif
