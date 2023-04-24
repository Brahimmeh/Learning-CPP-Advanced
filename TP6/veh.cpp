#include"veh.h"

veh::veh()
{
	
}

veh::veh(float a, float b, int c)
{
	vit=a;
	cx=b;
	nbrR=c;
}

void veh::aff()
{
	cout<<"La vitesse : "<<vit<<endl
	    <<"Le Coef : "<<cx<<endl
	    <<"La Nombre de Roue : "<<nbrR<<endl;
}

veh::~veh()
{
	
}

voit::voit()
{
	
}

voit::voit(float a, float b):veh(a,b)
{
	veh::nbrR=4;
}

void voit::aff()
{
	cout<<"Les Information de la Voiture "<<endl;
	veh::aff();
}

float voit::vitesse()
{
	return ((1-veh::cx)*((float)veh::vit/veh::nbrR));
}

camion::camion()
{
	
}

camion::camion(int a,float b, float c, int d):veh(b,c,d)
{
	carg=a;
}

void camion::aff()
{
	cout<<"Les Information du Camion "<<endl;
	veh::aff();
	cout<<"La Marchendises Chargee :"<<carg<<endl;
	
}

float camion::vitesse()
{
	return (2*(1-veh::cx)*((float)veh::vit/veh::nbrR)*carg);
}


