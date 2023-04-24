#include"devoir.h"

Error::Error(char* a)
{
	err=a;
}

Publication::Publication()
{
	
}

Publication::Publication(int a,int b,int c,int d)
{
	id_compte=a;
	id_pub=b;
	nbr_j=c;
	nbre_c=d;
	
	if(nbr_j<0 || nbre_c<0 )
	throw Error ("Valeur Invalide Publication (Negative)");
}

int Publication::get_jaime()
{
	return nbr_j;
}

int Publication::get_id()
{
	return id_compte;
}

int Publication::is_photo()
{
	return 0;
}

void Publication::show()
{
	cout<<"-----------------Publication------------------"<<endl;
	cout<<"l'id Compte :"<<id_compte<<endl;
	cout<<"l'id Publication :"<<id_pub<<endl;
	cout<<"le Nombre des J'aime :"<<nbr_j<<endl;
	cout<<"le Nombre de Compte :"<<nbre_c<<endl;
}

int Publication::get_pht()
{
	return 0;
}

photo::photo()
{
	
}

photo::photo(int a,int b,int c,int d,int e):Publication(a,b,c,d)
{
	nbr_ph=e;
	if(nbr_ph<1 || nbr_ph>10)
	throw Error("Valeur Invalide Photo (N'est Pas Compris entre 1 et 10)");
	
}

void photo::show()
{
	Publication::show();
	cout<<"Le Nombre de Photos Partagees :"<<nbr_ph<<endl;
	
}

int photo::is_photo()
{
	return nbr_ph;
}

video::video()
{
	
}

video::video(int a,int b,int c,int d,int e,int f):Publication(a,b,c,d)
{
	nbr_vue=e;
	duree=f;
	if(nbr_vue<0 || duree>59 )
	throw Error("Valeur Invalide Video (Vue Negatif ou Duree > 59)");
	
}

void video::show()
{
	Publication::show();
	cout<<"Le Nombre de vue :"<<nbr_vue<<endl;
	cout<<"La Duree :"<<duree<<endl;
}

float video::performence()
{
	return (float)nbr_vue/(Publication::get_jaime());
}

int video::is_photo()
{
	return 0;
}

