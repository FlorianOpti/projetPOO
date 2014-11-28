#ifndef _espace_
#define _espace_
#include<string>
#include "InterCase.cpp"
class Espace : InterCase 
{
public:
	void affichage ();
	std::string toString();
};

void Espace ::affichage (){

}
std::string Espace ::toString(){
	return " ";
}

#endif
