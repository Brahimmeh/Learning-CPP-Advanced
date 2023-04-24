#include"bat.h"

bat::bat(){
	
}

bat::bat(string a, float b, float c)
{
	adr=a;
	sup=b;
	price=c;
}

void bat::aff(){
	
	cout<<"Les informations Du Batiement "<<endl;
	cout<<"L'Adresse : "<<adr<<endl;
	cout<<"La Supercifie : "<<sup<<endl;
	cout<<"Le prix Par Metre : "<<price<<endl;
}

float bat::calcPrixBat()
{
	return (sup*price);
}

Maison::Maison(string a, float b, float c, int e, int f ,bool g):bat(a,b,c)
{
	nbrp=e;
	supJ=f;
	ext=g;
}

void Maison::aff(){
	
	cout<<"AFFICHAGE Maison "<<endl;
	bat::aff();
	cout<<"Le Nombre des Pieces : "<<nbrp<<endl;
	if(ext)
	cout<<"La Supercifie Jardin : "<<supJ<<endl;
	
}

float Maison::calcPrixBat()
{
	if(ext)
	return (bat::calcPrixBat()+supJ*((float)bat::price/2));
	
	else
	return bat::calcPrixBat();
	
}
