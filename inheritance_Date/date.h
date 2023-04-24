#include<iostream>
#include<iomanip>
using namespace std;

class date {
	int j,m,a;
	
	public:
		date();
		date(int,int,int);
		void afficher();
		void affiche();
		bool check();
		void yearplus(int);
		void monthplus(int);
		void dayplus(int);
		
};

class dateheure : protected date
{
	int h,min,sec;
	
	  public:
	  	dateheure();
	  	dateheure(int,int,int,int,int,int);
	  	void afficher();
	  	void secplus(double);
	  	void minplus(double);
	  	void heureplus(double);
	  	bool check();
};
