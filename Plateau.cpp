#ifndef Plateau_
#define Plateau_

#include "Matrice.cpp"
#include "Color.cpp"
#include<cmath>



class Plateau : Observable
{
protected:
	Matrice matriceH;
	Matrice matriceV;
	Affichage aff;
	
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


	
	Plateau::~Plateau(){
		delete &matriceH;
		delete &matriceV;
	}

	
	Plateau::Plateau(Affichage a){
		a = *(new AffichageConcret1());
		matriceH = *(new Matrice());
		matriceV = *(new Matrice());
	}
	
	
	bool Plateau::placPion(Pion *p, int pos){
		
		bool effectue = false;
		if(matriceH.estVide(pos)){
			delete matriceH.pion(pos);
			assert(matriceH.estVide(pos) and matriceV.estVide(conv(pos)));
			effectue = matriceH.setPion(p, pos);
			effectue = effectue and matriceV.setPion(p, conv(pos));
			
		}
		return effectue;
		
	}
	
	void Plateau::placPion(Player j,int pos)
	{
		Colore c = j.getColore();
		FactoryPion fact = *(new FactoryPion());
		
		if(c.isBlack())
		{
			placPion(fact.factoryMethod("noir"),pos);
		}
		if(c.isRed())
		{
			placPion(fact.factoryMethod("rouge"),pos);
		}
		
	}
	
	
	
	bool Plateau::suppPion(int pos){
		bool effectue = false;
		if(!matriceH.estVide(pos)){
			delete matriceH.pion(pos);
			Pion* nouvPionVide = new PionV();
			effectue = matriceH.setPion(nouvPionVide, pos);
			effectue = effectue and matriceV.setPion(nouvPionVide, conv(pos));
			
		}else{
			std::cout<< " can't do that\n";
		}
		return effectue;
	}	
	bool Plateau::suppPion(Pion *p){
		bool effectue = false;
		int pos = matriceH.indice(p); 
		if(!matriceH.estVide(pos)){
			delete p;
			Pion* nouvPionVide = new PionV();
			effectue = matriceH.setPion(nouvPionVide, pos);
			effectue = effectue and matriceV.setPion(nouvPionVide, conv(pos));
			
		}else{
			std::cout<< " can't do that\n";
		}
		return effectue;
	}	
	
	
	int Plateau::getRight(int x){ // passer le code en matrice horizontale
		int res = x;
		x++;
		if( x%3 == 0){
			return -1;
		}else{
			return res+1;
		}
	}
	int Plateau::getDown(int x){
		int res = x;
		x++;
		x = conv(x);
		
		if( x%3 == 0){
			return -1;
		}else{
			return conv (res+1);
		}
		
	}
	int Plateau::getLeft(int x){
		int res = x;
		x++;
		if( x%3 == 1){
			return -1;
		}else{
			return (res-1);
		}
	}
	int Plateau::getUp(int x){
		int res = x;
		x++;
		x = conv(x);
		
		if( x%3 == 1){
			return -1;
		}else{
			return conv (res-1);
		}
	}
	/*void depRight(Pion pion){
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
	
	void depLeft(Pion p){
		int indice = matriceH.indice(&pion);
		int left = getLeft(indice);
		if(left != -1){
			Pion* pleft = matriceH.pion(left);
			if(isVide(*pleft)){
				PionV temp = matriceH.pion(left);
				// sauvegarde du pionvide ou on va bouger
				
				matriceH.setPion (&pion, left);
				matriceH.setPion (temp, indice);
				
				matriceV.setPion (&pion, conv(left));
				matriceV.setPion (temp, conv(indice));
			}else{
				std::cout<< " can't go left\n";
			}
		}else{
			std::cout<< " can't go left\n";
		} 
	}
	void depUp(Pion p){
		int indice = matriceH.indice(&pion);
		int up = getUp(indice);
		if(up != -1){
			Pion* pup = matriceH.pion(up);
			if(isVide(*pup)){
				PionV temp = matriceH.pion(up);
				// sauvegarde du pionvide ou on va bouger
				
				matriceH.setPion (&pion, up);
				matriceH.setPion (temp, indice);
				
				matriceV.setPion (&pion, conv(up));
				matriceV.setPion (temp, conv(indice));
			}else{
				std::cout<< " can't go up\n";
			}
		}else{
			std::cout<< " can't go up\n";
		} 
	}
	void depDown(Pion p){
		int indice = matriceH.indice(&pion);
		int down = getDown(indice);
		if(down != -1){
			Pion* pdown = matriceH.pion(down);
			if(isVide(*pdown)){
				PionV temp = matriceH.pion(down);
				// sauvegarde du pionvide ou on va bouger
				
				matriceH.setPion (&pion, down);
				matriceH.setPion (temp, indice);
				
				matriceV.setPion (&pion, conv(down));
				matriceV.setPion (temp, conv(indice));
			}else{
				std::cout<< " can't go down\n";
			}
		}else{
			std::cout<< " can't go down\n";
		} 
	}
	*/
	//POINTEUR VERS FONCTION !!!
	
	typedef int(*Fonction)(int);
	// to do renvoyer un booleen pour utiliser dans Dplacement.cpp
	void Plateau::dep(Pion *p, Fonction direction){
		int indice = matriceH.indice(p);
		int down = direction(indice);
		if(down != -1){
			Pion* pdown = matriceH.pion(down);
			if(matriceH.estVide(matriceH.indice(pdown))){
				Pion *temp = matriceH.pion(down);
				// sauvegarde du pionvide ou on va bouger
				
				matriceH.setPion (p, down);
				matriceH.setPion (temp, indice);
				
				matriceV.setPion (p, conv(down));
				matriceV.setPion (temp, conv(indice));
			}else{
				std::cout<< " can't do that\n";
			}
		}else{
			std::cout<< " can't do that\n";
		} 
	}
	void Plateau::dep(int indice, Fonction direction){
		Pion *p = matriceH.pion(indice);
		dep(p,direction);
	}
	
	Pion* Plateau::getPion(int indice){
		return matriceH.pion(indice);
	}
	
	int Plateau::getIndice(Pion *p){
		return matriceH.indice(p);
	}
	
	bool Plateau::LignePleine (int indice){
		Pion * pion = matriceH.pion(indice);
		indice = indice /3;
		
		return matriceH.LignePleine(indice, pion->getColore());
	}
	bool Plateau::ColonnePleine (int indice){
		Pion * pion = matriceH.pion(indice);
		indice = conv(indice);
		indice = indice /3;
		
		return matriceV.LignePleine(indice,pion->getColore());
	}
	Matrice Plateau::getMatrice(){
		return *matriceH;
	}
	
	void Plateau::notif (){
		/*for (Affichage a : aff){
			a.update();
		}*/
		aff.update();
	}

	

int main(){
	Plateau P = *(new Plateau());
	
	return 0;

}
#endif


