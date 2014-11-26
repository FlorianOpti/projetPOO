#ifndef _AffC1_
#define _AffC1_
class AffichageConcret1 : Affichage
{
private:
	Plateau plat;
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
	 	
	 	
	 	string[285] aff;
	 	int j = 0;
	 	for (int i=0; i<285; ++i){
	 		if(i==0||i==10||i==20||i==47||i==54||i==61||
	 		i==94||i==98||i==102||i==132||i==135||i==138||
	 		i==146||i==149||i==152||i==182||i==186||i==190||
	 		i==223||i==230||i==237||i==264||i==274||i==284){
	 		
	 			aff[i] = m[j];
	 			j++;
	 		}else if((i>0 && i<20 && i!=10)||
	 			(i>47&&i<61)||
	 			(i>94&&i<102)||
	 			(i>132&&i<138)||
	 			(i>146&&i<152)||
	 			(i>182&&i<190)||
	 			(i>223&&i<237)||
	 			(i>264&&i<284))
	 			
	 			
		 		aff[i]=horiz->toString();
			}else if(i%22==21){	
				aff[i] = "\n";
			}else if( (i%22==0)||
				(i%22==20)||
				(i>47 && i<237 && (i%22==3||i%22==17))||
				(i==32||i==76||i==110+16||i==154+16||
				i==110+24||i==154+24||i==208||i==252)
				){
				
				aff[i] = vertic->toString();
			}else{
				aff[i] = esp->toString();
			}
	 	}
	 	for (int i=0; i<285; ++i){
	 		cout<<aff[i];
	 	}
	 	

};
#endif;
