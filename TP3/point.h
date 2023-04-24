#include<iostream>
#include<string>
using namespace std;

class point{
	string abs,ord;
	
	public:
		point();
		point(string,string);
		void afficher();
		void changer_cord(string,string);
};

class figure{
	string couleur,epais;
	
	public:
		figure();
		figure(string,string);
		void afficher();
		void changer_coul(string);
		void changer_ep(string);
};

class cercle : public point, public figure{
	string rayon;
	
	public:
		cercle();
		cercle(string,string,string,string,string);
		void afficher();
		void changer_r(string);
};

class cylindre : public cercle{
	string hauteur;
	
	public:
		cylindre();
		cylindre(string,string,string,string,string,string);
		void afficher();
		void changer_h(string);
};
