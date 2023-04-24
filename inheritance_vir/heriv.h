#include<iostream>
#include<iomanip>
using namespace std;

class date {
	int j,m,a;
	
	public:
		date();
		date(int,int,int);
		void afficher();
		int duree();
};

class fonct {
	string mat,pst;
	date dat_r;
	
	protected:
	float sal;
	
	public:
		fonct();
		fonct(string,string,date,float);
		void afficher();
};

class prof : virtual protected fonct{
	
	string spe;
	
	public:
		prof();
		prof(string,string="",string="",date=date(),float=0);
		void afficher();
};

class respo : virtual protected fonct{
	
	string resp;
	
	public:
		respo();
		respo(string,string="",string="",date=date(),float=0);
		void afficher();
};

class prof_r : protected respo, protected prof{
	
	float prime;
	date date_aff;
	
	public:
		prof_r();
		prof_r(string,string,date,float,string,string,float,date);
		void afficher();
		void pm();
		float tot();
};
