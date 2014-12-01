
#ifndef Pion_
#define Pion_

#include "Color.hpp"
#include "ElemGraph.hpp"



class Pion : ElemGraph
{
public :
  Pion();
	virtual Colore getColore()=0;
	virtual void affichage()=0;
	virtual std::string toString() =0;


protected:
	Colore color;
};





#endif
