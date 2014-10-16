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
	
};


#endif
