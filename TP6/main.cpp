#include"veh.h"


main() {
	
	veh v(100.45,0.25,23);
	v.aff();
	cout<<endl<<endl;
	
	voit v1(890.45,0.25);
	v1.aff();
	cout<<"La vitesse de la Voiture "<<v1.vitesse()<<endl<<endl;
	
	camion c1(1290,450.45,0.25,53);
	c1.aff();
	cout<<"La vitesse du Camion "<<c1.vitesse()<<endl<<endl;

}
