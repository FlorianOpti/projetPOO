#ifndef Plateau
#define Plateau

#include "Matrice.cpp"
#include<cmath>



class Plateau 
{
protected:
	Matrice matriceH;
	Matrice matriceV;
	
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
	int getRight(int x){
		int res = x;
		x++;
		if( mod(x,3) == 0){
			return -1;
		}else{
			return res+1;
		}
	}
public:

	Plateau();
	~Plateau();
	
	
	Plateau(){
		matriceH = *(new Matrice());
		matriceV = *(new Matrice());
	}
	
	
	bool placPion(Pion p, int pos){
		assert(matriceH.estVide(pos) and matriceV.estVide(conv(pos)));
		bool effectue;
		effectue = matriceH.setPion(&p, pos);
		effectue = effectue and matriceV.setPion(&p, conv(pos));
		return effectue;
	}	
	void depRight(Pion p){
		// si on peut se deplacer a droite ( une case a droite et innocuppée)
	}
	void depLeft(Pion p);
	void depUp(Pion p);
	void depDown(Pion p);
};


#endif
