
#ifndef _Fgrap_
#define _Fgrap_
class FactoryGraphique 
{
public:
	virtual FactoryGraphique()=0;
	virtual ~FactoryGraphique()=0;
	virtual ElemGraph factoryMethod (string type)=0;
};

#endif

