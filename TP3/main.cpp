#include "point.h"

int main() {
	
	point p1("ab1","or1");
	cout<<"les informations du Point P1"<<endl;
	p1.afficher();
	cout<<endl;
	
	figure f1("cl1","ep1");
	cout<<"les informations du Figure F1"<<endl;
	f1.afficher();
	cout<<endl;
	
	cercle c1("ab2","or2","cl2","ep2","ray1");
	cout<<"les informations du Cercle C1"<<endl;
	c1.afficher();
	cout<<endl;
	
	cylindre s1("ab3","or3","cl3","ep3","ray3","hau1");
	cout<<"les informations du Cylindre S1"<<endl;
	s1.afficher();
	cout<<endl;
	
	return 0;
}
