#include "Game.hpp"
	Game::Game ()
	{
		joueur1 = new Player(new Color(1,0));
		joueur2 = new Player(new Color(0,1));
		plateau = new Plateau();
		phaseDeplacement = new Deplacement(this);
		phasePlacement = new Placement(this);
		phaseCourante = phasePlacement;
		phaseFinduJeu = new FinduJeu(this);
	}

	void Game::play ()
	{
		phaseCourante.jouer();
	}
	Player Game::getJ1(){
		return joueur1;
	}
	Player Game::getJ2(){
		return joueur2;
	}
	Plateau Game::getPlateau(){
		return plateau;
	}

	Phase* Game::getPhaseDeplacement()
	{
		return phaseDeplacement;
	}
	Phase* Game::getPhaseFinduJeu()
	{
		return phaseFinduJeu;
	}
	void Game::setPhase(Phase p){
		phaseCourante = p;
	}
