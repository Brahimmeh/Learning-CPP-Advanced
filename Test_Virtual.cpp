#include<iostream>
using namespace std;

class personne{
	char nom, prenom, date;
	
	public:
   virtual nom;
	
};


class femme : public personne{
	
	int nbre;
	char homme;
	
	public:
	void makevoice()
	{
		cout<<"Accordion .......... \n";
	}
};

class salarie : public personne{
	
	float salaire;
	
	public:
	void makevoice()
	{
		cout<<"Accordion3333 .......... \n";
	}
};

class femmesalarie : public salarie, public femme
{
	
};

main()
{
	
}
