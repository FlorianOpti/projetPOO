#ifndef _ElemG_
#define _ElemG_
class ElemGraph 
{
public:
	virtual ElemGraph()=0;
	virtual ~ElemGraph()=0;
	virtual void affichage ()=0;
	virtual std::string toString ()=0;
};
#endif;
