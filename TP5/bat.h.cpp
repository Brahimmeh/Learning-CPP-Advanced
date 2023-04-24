#include<iostream>
#include<string>
using namespace std;

class bat{
	string adr;
	float sup,price;
	
	public:
		bat();
		bat(string="",float=0,float=0);
		void aff();
		float calcPrixBat();
};

class Maison: public bat{
	int nbrp,supJ;
	bool ext;
	
	public:
		Maison();
		Maison(string,float,float,int,int,bool);
		void aff();
		float calcPrixBat();
};
