#include"point.h"

point::point()
{
	
}

point::point(string a, string b)
{
	abs=a;
	ord=b;
}
 void point::afficher(){
 	
 	cout<<"les informations du Point sont : "<<abs<<" , "<<ord<<endl;
 	
 }
 
void point::changer_cord(string a, string b)
{
	abs=a;
	ord=b;
}

figure::figure(){
	
}

figure::figure(string a, string b)
{
	couleur=a;
	epais=b;
}

void figure::afficher()
{
	cout<<"Les informations du Figure : "<<couleur<<" , "<<epais<<endl;
	
}

void figure::changer_coul(string a)
{
	couleur=a;
}

void figure::changer_ep(string b)
{
	epais=b;
}

cercle::cercle(){
	
}

cercle::cercle(string a,string b, string c, string d, string e) : point(a,b), figure(c,d){
	
	rayon =e;
	
}

void cercle::afficher(){
	
	point::afficher();
	figure::afficher();
	cout<<"Le rayon du Cercle est :"<<rayon<<endl;
	
}

void cercle::changer_r(string a)
{
	rayon =a ;
}

cylindre::cylindre(){
	
}

cylindre::cylindre(string a,string b, string c, string d, string e, string f) :  cercle(a,b,c,d,e)
{
	hauteur=f;
}

void cylindre::afficher(){
	
	cercle::afficher();
	cout<<"l'hauteur est : "<<hauteur<<endl;
	
}

void cylindre::changer_h(string a)
{
	hauteur=a;
}
