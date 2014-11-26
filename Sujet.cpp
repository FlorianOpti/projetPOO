#ifndef _Observable_
#define _Observable_
class Observable 
{
public:
	virtual Observable()=0;
	virtual ~Observable()=0;
	virtual void notif ()=0;
	virtual add(Affichage obs)=0;
	virtual supp(Affichage obs) =0;
};
#endif;
