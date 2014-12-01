#ifndef _ElemG_
#define _ElemG_

#include <string>
//#include "InterCase.cpp"

class ElemGraph 
{
public:
	ElemGraph();
	~ElemGraph();
	virtual void affichage ()=0;
	virtual std::string toString ()=0;
};
#endif
