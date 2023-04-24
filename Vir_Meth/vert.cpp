#include"vert.h"

date::date()
{
	j=0;
	m=0;
	a=0;
}

date::date(int jo,int mo, int an)
{
	
	j=jo;
	m=mo;
	a=an;

}

void date::afficher()
{
	cout<<"Le "<<setfill('0')<<setw(2)<<j<<"/"<<setw(2)<<m<<"/"<<a<<endl; 
}

int date::duree(){
	
	return 2022-a;
}

personne::personne()
{
	
}
personne::personne(string cin, string sex, string nom, string pernom): cin(cin), sex(sex), nom(nom), prenom(prenom){
	
}

void personne::afficher(){
	cout<<"les informations du personne"<<endl;
	cout<<"le CIN :"<<cin<<endl;
	cout<<"le Sex :"<<sex<<endl;
	cout<<"le Nom :"<<nom<<endl;
	cout<<"le Prenom :"<<prenom<<endl;
}
doc_Admn::doc_Admn()
{
	
}
acte_naissance::acte_naissance():doc_Admn(){
	
}

acte_naissance::acte_naissance(string a,date b,string c,string d, string e, date f, personne i, personne j) : doc_Admn(a,b)
{
	pren=c;
	sex=d;
	ville=e;
	dat_na=f;
	mere=i;
	pere=j;
}

void acte_naissance::afficher(){
	cout<<"les informations du l'acte de naissance "<<endl;
	cout<<"le Prenom :"<<pren<<endl;
	cout<<"le Sex :"<<sex<<endl;
	cout<<"la Ville :"<<ville<<endl;
	dat_na.afficher();
    cout<<"les informations du Pere :"<<endl;
    pere.afficher();
    cout<<"les informations du Mere :"<<endl;
    mere.afficher();
}


personne acte_naissance::nouv_nee()
{
	personne nv("00",sex,nom,pren);
	return nv;
}

