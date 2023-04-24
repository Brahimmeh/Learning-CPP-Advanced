#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class date {
	int j,m,a;
	
	public:
		date();
		date(int,int,int);
		void afficher();
		int duree();
};

class doc_Admn{
	string r;
	date d;
	
	public:
		doc_Admn();
		doc_Admn(string r,date d): r(r), d(d){};
		virtual void afficher()=0;
};

class personne{
	protected:
	string cin, sex, nom, prenom;
	
	public:
		personne();
		personne(string,string,string,string);
		void afficher();
};

class acte_naissance : public doc_Admn, virtual personne{
	string pren, sex, ville;
	date dat_na;
	personne mere, pere;
	
	public:
		acte_naissance();
		acte_naissance(string,date,string,string,string,date,personne,personne);
		void afficher();
		personne nouv_nee();
};

class acte_marriage : public doc_Admn{
	string ville;
	date dat_mar;
	personne mari, mariee;
	
	public:
		acte_marriage();
		acte_marriage(string,date,personne,personne);
		void afficher();
};
