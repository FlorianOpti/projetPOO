#ifndef _BarreVertic_
#define _BarreVertic_
#include <string>
#include "InterCase.cpp"
class BarreVertic : InterCase
{
public:
	void affichage ();
	std::string toString();
};

void BarreVertic ::affichage (){

}


std::string BarreVertic ::toString(){
	return "|";
}
#endif
