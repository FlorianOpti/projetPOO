#ifndef _AffC1_
#define _AffC1_
#include "Affichage.hpp"
#include "Sujet.hpp"
#include "FactoryBarre.hpp"
#include "Plateau.hpp"

class AffichageConcret1 : Affichage
{
private:
	Plateau plat;
	FactoryBarre fac;
public:
  AffichageConcret1(Plateau p);
  ~AffichageConcret1();
  void update ();
};
#endif
