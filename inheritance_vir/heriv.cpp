#include"heriv.h"

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

fonct::fonct(){
	
}

fonct::fonct(string a,string b,date c,float e)
{
	mat=a;
	pst=b;
	dat_r=c;
	sal=e;
}

void fonct::afficher()
{
	cout<<"le Matricule :"<<mat<<endl;
	cout<<"le poste :"<<pst<<endl;
	cout<<"la date :";
	dat_r.afficher();
	cout<<"le salaire :"<<sal<<endl;
}

prof::prof(){
	
}

prof::prof(string a,string b, string c, date d, float e) : fonct(b,c,d,e)
{
	spe=a;
}

void prof::afficher(){
	
	// fonct::afficher();
	cout<<"la specialite :"<<spe<<endl;
	
}

respo::respo(){
	
}

respo::respo(string a, string b,string c, date d, float e): fonct(b,c,d,e)
{
	resp=a;
}

void respo::afficher(){
	
	//fonct::afficher();
	cout<<"la responsabilite :"<<resp<<endl;
	
}

prof_r::prof_r(){
	
}

prof_r::prof_r(string a, string b,date e, float f,string c,string d, float i, date j): 
fonct(a,b,e,f), prof(c), respo(d){
	
	prime=i;
	date_aff=j;
}

void prof_r::afficher(){
	
	fonct::afficher();
	prof::afficher();
	respo::afficher();
	cout<<"la prime :"<<prime<<endl;
	cout<<"la date d'affectation :";
	date_aff.afficher();
}

void prof_r::pm(){
	
	int d=date_aff.duree();
	
	if(d<2)
	  prime = (sal*((float)2/100)); 
	  
	else if (d<5)
	  prime = (sal*((float)5/100)); 
	  
	else if (d<10)
	  prime = (sal*((float)10/100));
	  
	else
	   prime = (sal*((float)15/100));
}

float prof_r::tot()
{
	return (sal+prime);
}
