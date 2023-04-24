#include"heriv.h"

personne::personne(){
	
}

personne::personne(string a,string b,string c,int e)
{
	id=a;
    nom=b;
	pre=c;
	age=e;

}

void personne::afficher()
{
	cout<<"l.ID :"<<id<<endl;
	cout<<"le nom :"<<nom<<endl;
	cout<<"le prenom :"<<pre<<endl;
	cout<<"l'age :"<<age<<endl;
}

Enseignant::Enseignant(){
	
}

Enseignant::Enseignant(string b, string c,string d, int e,float f, int i) : personne(b,c,d,e)
{
	sal=f;
	nb_h=i;
}

void Enseignant::afficher(){
	
	personne::afficher();
	cout<<"le Salaire :"<<sal<<endl;
	cout<<"le nombre d'heures :"<<nb_h<<endl;
	
}

void Enseignant::ajouPrime(int a)
{
	sal+=a;
}

Etudiant::Etudiant(){
	
}

Etudiant::Etudiant(string b, string c,string d, int e,string f, string i, int g): personne(b,c,d,e)
{
	cycle=f;
	classe=i;
	classm=g;
}

void Etudiant::afficher(){
	
	personne::afficher();
	cout<<"le Cycle :"<<cycle<<endl;
	cout<<"le Classe :"<<classe<<endl;
	cout<<"le classement :"<<classm<<endl;
	
}

Doctorant::Doctorant(){
	
}

Doctorant::Doctorant(string a,string b,string c,int d,float e,int f,string i,string g,int k,int l): 
 Enseignant(a,b,c,d,e,f), Etudiant(a,b,c,d,i,g,k){
	
	prix_h=l;
}

void Doctorant::afficher(){
	
	Enseignant::afficher();
	Etudiant::afficher();
	cout<<"le Prix par Heure: "<<prix_h<<endl;
	
}

float Doctorant::calculerSalaire(){
	
	return (nb_h+prix_h)+sal;
	
}
