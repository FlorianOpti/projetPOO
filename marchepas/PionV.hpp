#ifndef PionV_
#define PionV_

#include "Pion.cpp"
#include "PionR.cpp"
#include "PionN.hpp"



class PionV : public Pion
{
public:
  PionV();
  ~PionV();
  Colore getColore()=0;
	void affichage()=0;
	std::string toString() =0;





};

#endif
