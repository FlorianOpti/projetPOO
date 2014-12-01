#include "FinDuJeu.hpp"

void FinduJeu::jouer()
{

	if (game.getJ2().getNbPion()>2)
	{
	std::cout<<" JOUEUR 2 VICTORIEUX"<<std::endl;
	}
	if (game.getJ1().getNbPion()>2)
	{
	std::cout<<" JOUEUR 1 VICTORIEUX"<<std::endl;
	}

}

