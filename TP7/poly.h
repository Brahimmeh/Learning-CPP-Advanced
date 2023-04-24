#include<iostream>
#include<string>
using namespace std;

class Client{
	string cin;
	protected:
	   float mon_t;
	   string nom;
	
	public:
		Client();
		Client(string,string,float);
		virtual float get_mont()=0;
		virtual string get_nom();
		virtual bool ver_credi();
		virtual string get_numch();
		virtual float get_menr();
		virtual	float get_mens();
		virtual void aff();
};

class ClientComptant: public Client{
	string num_che, code_b;
	
	public:
		ClientComptant();
		ClientComptant(string,string,float,string,string);
		float get_mont();
		string get_nom();
		string get_numch();
		bool ver_credi();
		float get_menr(){
			return 0;
		}
		float get_mens(){
			return 0;
		}
		void aff();
};

class ClientCredit: public Client{
	int r_mens;
	float mens,d_mens;
	
	public:
		ClientCredit();
		ClientCredit(string,string,float,int,float,float);
		float get_mont();
		string get_nom();
		float get_menr();
		float get_mens();
		bool ver_credi();
		string get_numch()
		{
			return "";
		}
		void aff();
};

class societe{
	string nom;
	Client **lc;
	int nl;
	
	public:
		societe(string);
		societe(societe&);
		void operator+= (Client*);
		string operator[] (string);
		float mon();
};
