#ifndef _AffC1_
#define _AffC1_
#include "Affichage.cpp"
#include "Sujet.cpp"
class AffichageConcret1 : Affichage
{
private:
	Sujet plat;
	FactoryBarre fac;
public:
	AffichageConcret1(Plateau p){
		plat=p;
		fac = *(new FactoryBarre());
	}
	 ~AffichageConcret1(){delete plat;}
	 
	 void update (){
	 	Matrice m = plat.getMatrice();
	 	InterCase* vertic = fac.factoryMethod("verticale");
	 	InterCase* horiz = fac.factoryMethod("horizontale");
	 	InterCase* esp = fac.factoryMethod("espace");
	 	
	 	// mettre les indic (1-13) (A-M)
	 	string[375] aff;
	 	int j = 0;
	 	int car;
	 	char c;
	 	string chaine =  "1  2  3   4   5  6  7   \n";
	 	int cptChaine = 0;

	 	for (int i=0; i<375; ++i){
	 		if(i==0||i==10||i==20||i==53||i==60||i==67||
	 		i==106||i==110||i==114||i==150||i==153||i==156||
	 		i==164||i==167||i==170||i==206||i==210||i==214||
	 		i==253||i==260||i==267||i==300||i==310||i==320){
	 		
	 			aff[i] = m[j];
	 			j++;
	 		}else if((i>0 && i<20)||
	 			(i>53&&i<67)||
	 			(i>106&&i<114)||
	 			(i>150&&i<156)||
	 			(i>164&&i<170)||
	 			(i>206&&i<214)||
	 			(i>253&&i<267)||
	 			(i>300&&i<320))||
	 			(i%25==22)
	 			
	 			
		 		aff[i]=horiz->toString();
			}else if(i%25==24){	
				aff[i] = "\n";
			}else if( (i%25==0)||
				(i%25==20)||
				(i>53 && i<267 && (i%25==3||i%25==17))||
				(i==35||i==85||i==131||i==189||
				i==139||i==181||i==235||i==285)
				){
				
				aff[i] = vertic->toString();
			}else if(i%25==23){
				car = (i+2)/25;
				c = 64 + car;
				aff[i] = "" + c;
				
			}else if(i=>350){
				aff[i] = chaine.at(cptChaine);
				cptChaine++; 
			}else{
				aff[i] = esp->toString();
			}
	 	}
	 	for (int i=0; i<375; ++i){
	 		cout<<aff[i];
	 	}
	 	

};
#endif
