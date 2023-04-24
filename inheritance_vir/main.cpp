#include"heriv.h"

int main() {
	
	date d(23,3,1999);
	date d1(19,4,2001);
	prof_r p("12OPLS","DIRECTEUR",d,20000,"PROGRAMMATION","PEDAGOG",2000,d1);
	p.afficher();
	p.pm();
	float c = p.tot();
	cout<<endl<<"Apres changement de la Prime"<<endl<<endl;
	p.afficher();
	cout<<"le salaire total :"<<c<<endl;
	
}
