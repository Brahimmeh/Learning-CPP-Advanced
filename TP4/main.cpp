#include"heriv.h"

int main() {
	
	personne p("123DE", "ADAM", "BOURAS", 20);
	cout<<"Infos Personne "<<endl;
	p.afficher();
	cout<<endl;

	Enseignant p1("123DE", "ADAM", "BOURAS", 20,2,500);
	cout<<"Infos Enseignant "<<endl;
	p1.afficher();
	cout<<endl;
	
	Etudiant p2("123DE", "ADAM", "BOURAS", 20, "IIR", "G3", 36);
	cout<<"Infos Etudiant "<<endl;
	p2.afficher();
	cout<<endl;
	
	Doctorant p3("123DE", "ADAM", "BOURAS", 20,2,500, "IIR", "G3", 36, 23.45);
	cout<<"Infos Doctorant "<<endl;
	p3.afficher();
	cout<<endl;
	
	
}
