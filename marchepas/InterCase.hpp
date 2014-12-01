#ifndef _InterCa_
#define _InterCa_
#include <string>
#include "ElemGraph.hpp"
/*#include "BarreVertic.cpp"
#include "BarreHoriz.cpp"
#include "Espace.cpp"*/
class InterCase : ElemGraph
{
public:
	virtual void affichage ()=0;
	virtual std::string toString() =0;
};
#endif
