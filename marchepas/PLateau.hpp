#ifndef Plateau_
#define Plateau_

#include "Matrice.hpp"
//#include "Color.hpp"
class Colore;
#include<cmath>
#include "AffichageConcret1.hpp"

#include "FactoryPion.hpp"




class Plateau : Sujet
{
protected:
	Matrice matriceH;
	Matrice matriceV;
	Affichage aff;
	FactoryPion* fac;

	int conv(int x){
		assert(x>-1 and x<24);
		int res = x;
		x++;
		if(x != 1 and x != 4 and x != 7 and x != 18 and x != 21 and x != 24 ){
			if(x == 8 or x == 13){
				return (res+4);
			}
			if(x == 12 or x == 17){
				return (res -4);
			}
			if(x == 2 or x == 15){
				return (res + 8);
			}
			if(x==10 or x==23){
				return (res -8);
			}
			if(x==5 or x==14){
				return (res + 6);
			}
			if(x==11 or x==20){
				return (res-6);
			}
			if(x==3){return 22;}
			if(x==22){return 3;}
			if(x==6){return 19;}
			if(x==9){return 16;}
			if(x==16){return 9;}
			if(x==19){return 6;}
		}
		return res;
	}

public:
	typedef int(*Fonction)(int);
	~Plateau();
	Plateau(Affichage a);
	bool placPion(Pion *p, int pos);
	void placPion(Player j, int pos);
	bool suppPion(int pos);
	bool suppPion(Pion* p);
	int getRight(int x);
	int getDown(int x);
	int getLeft(int x);
	int getUp(int x);
	void dep(Pion *p, Fonction direction);
	void dep(int indice, Fonction direction);
	Pion* getPion(int indice);
	int getIndice(Pion *p);
	bool LignePleine (int indice);
	bool ColonnePleine (int indice);
	Matrice getMatrice();
	void notif ();
	void add(Affichage obs){}
	void supp(Affichage obs){}

};
#endif

