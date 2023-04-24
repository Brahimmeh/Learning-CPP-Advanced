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

class heure 
{
	protected:
	int h,min,sec;
	
	  public:
	  	heure();
	  	heure(int,int,int);
	  	void secplus(double);
	  	void minplus(double);
	  	int heureplus(double);
	  	void afficher();
	  	bool check();
	  	
};


class dateheure : public date, public heure
{
	public:
		dateheure();
		dateheure(int,int,int,int,int,int);
		void heureplus(double);
	    bool check();
	    void afficher();
};

