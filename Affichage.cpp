#ifndef _Aff_
#define _Aff_
class Affichage 
{
public:
	virtual Affichage()=0;
	virtual ~Affichage()=0;
	virtual void update ()=0;
};
#endif;
