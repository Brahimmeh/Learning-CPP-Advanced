#include"bat.h"

main()
{
	bat b("AGDAL",100.98,1000);
	b.aff();
	cout<<"Le Prix Batiment est : "<<b.calcPrixBat()<<endl<<endl;
	
	Maison m("AGDAL",100.98,1000,2,200,true);
	m.aff();
	cout<<"Le Prix Maison est : "<<m.calcPrixBat()<<endl<<endl;
	
	bat* b1=&m;
	b1->aff();
	
	Maison* m1 = dynamic_cast <Maison*>(&b);
	m1->aff();
}
