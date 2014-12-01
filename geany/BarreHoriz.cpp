#ifndef _BarreHoriz_
#define _BarreHoriz_
#include <string>
#include "InterCase.cpp"
class BarreHoriz : InterCase 
{
public:
	void affichage ();
	std::string toString();
};

void BarreHoriz ::affichage (){

}
std::string BarreHoriz ::toString(){
	return "_";
}

#endif
