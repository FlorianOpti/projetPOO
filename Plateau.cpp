#ifndef Plateau_
#define Plateau_

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
	
public:

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
	
	int getRight(int x){ // passer le code en matrice horizontale
		int res = x;
		x++;
		if( x%3 == 0){
			return -1;
		}else{
			return res+1;
		}
	}
	int getDown(int x){
		int res = x;
		x++;
		x = conv(x);
		
		if( x%3 == 0){
			return -1;
		}else{
			return conv (res+1);
		}
		
	}
	int getLeft(int x){
		int res = x;
		x++;
		if( x%3 == 1){
			return -1;
		}else{
			return (res-1);
		}
	}
	int getUp(int x){
		int res = x;
		x++;
		x = conv(x);
		
		if( x%3 == 1){
			return -1;
		}else{
			return conv (res-1);
		}
	}
	void depRight(Pion pion){
		// si on peut se deplacer a droite ( une case a droite et innocuppée)
		int indice = matriceH.indice(&pion);
		int right = getRight(indice);
		if(right != -1){
			Pion* pright = matriceH.pion(right);
			if(isVide(*pright)){
				PionV temp = matriceH.pion(right);
				// sauvegarde du pionvide ou on va bouger
				
				matriceH.setPion (&pion, right);
				matriceH.setPion (temp, indice);
				
				matriceV.setPion (&pion, conv(right));
				matriceV.setPion (temp, conv(indice));
			}else{
				std::cout<< " can't go right\n";
			}
		}else{
			std::cout<< " can't go right\n";
		} 
	}
	
	void depLeft(Pion p);
	void depUp(Pion p);
	void depDown(Pion p);
};

int main(){
	Plateau P = *(new Plateau());
	
}
#endif


