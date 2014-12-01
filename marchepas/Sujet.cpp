#ifndef _Observable_
#define _Observable_
#include "Affichage.cpp" 
class Sujet 
{
public:
	Sujet();
	~Sujet();
	virtual void notif ()=0;
	virtual void add(Affichage obs)=0;
	virtual void supp(Affichage obs) =0;
};
#endif
