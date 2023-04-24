#include<iostream>
using namespace std;

class veh {
	protected: 
	    float vit,cx;
		int nbrR;
	
	public:
		veh();
		veh(float,float,int=1);
		~veh();
		void aff();
};

class voit: public veh{
	
	public:
		voit();
		voit(float,float);
		void aff();
		float vitesse();
};

class camion: public veh{
	
	int carg;
		
	public:
		camion();
		camion(int,float,float,int=12);
		void aff();
		float vitesse();
};
