
#ifndef Pion_
#define Pion_

#include "Color.cpp"
#include "ElemGraph.cpp"



class Pion : ElemGraph
{
public :
	virtual Colore getColore()=0;
	virtual void affichage()=0;
	virtual std::string toString() =0;
	
	
protected:
	Colore color;
};





#endif   
