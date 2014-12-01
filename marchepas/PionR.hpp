#ifndef PionR_
#define PionR_

#include "Pion.hpp"

class PionR : public Pion
{
public:
  PionR();
  ~PionR();
  Colore getColore()=0;
	void affichage()=0;
	std::string toString() =0;


};
#endif
