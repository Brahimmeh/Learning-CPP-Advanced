#include<iostream>
#include<iomanip>
using namespace std;

class personne {
	string id,nom,pre;
	int age;

	public:
		personne();
		personne(string,string,string,int);
		void afficher();
};

class Enseignant : protected personne{
	
	protected:
	float sal;
	int nb_h;
	
	public:
		Enseignant();
		Enseignant(string,string,string,int,float, int);
		void afficher();
		void ajouPrime(int);
};

class Etudiant : protected personne{
	
	string cycle,classe;
	int classm;
	
	public:
		Etudiant();
		Etudiant(string,string,string,int,string,string,int);
		void afficher();
};

class Doctorant : protected Etudiant, protected Enseignant{
	
	int prix_h;
	
	public:
		Doctorant();
		Doctorant(string,string,string,int,float,int,string,string,int,int);
		void afficher();
		float calculerSalaire();
};
