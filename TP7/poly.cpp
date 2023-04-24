#include"poly.h"
using namespace std;
Client::Client()
{
	
}
Client::Client(string a,string b,float c)
{
	nom=a;
	cin=b;
	mon_t=c;
}

void Client::aff()
{
	cout<<"Les informations des Clients:"<<endl;
	cout<<"Le CIN :"<<cin<<endl;
	cout<<"Le Nom :"<<nom<<endl;
	cout<<"Le Montant Total :"<<mon_t<<endl;
}

ClientComptant::ClientComptant()
{
	
}

ClientComptant::ClientComptant(string a, string b, float c, string d, string e):Client(a,b,c)
{
	num_che=d;
	code_b=e;
}

float ClientComptant::get_mont(){
	return Client::mon_t;
}

string ClientComptant::get_nom(){
	return Client::nom;
}

bool ClientComptant::ver_credi(){
	return false;
}

string ClientComptant::get_numch(){
	return num_che;
}

void ClientComptant::aff()
{
	Client::aff();
	cout<<"Le Num Cheque :"<<num_che<<endl;
	cout<<"Le Code de la Banque :"<<code_b<<endl;
}
ClientCredit::ClientCredit()
{
	
}

ClientCredit::ClientCredit(string a, string b, float c, int d, float e, float f):Client(a,b,c)
{
	mens=e;
	d_mens=f;
	r_mens=d;
}

float ClientCredit::get_mont(){
	
	if(r_mens==0)
	return  d_mens;
	
	else
	return mens;
}

string ClientCredit::get_nom(){
	return Client::nom;
}

bool ClientCredit::ver_credi(){
	return true;
}

float ClientCredit::get_menr(){
	return r_mens;
}

float ClientCredit::get_mens(){
	return mens;
}

void ClientCredit::aff()
{
	Client::aff();
	cout<<"Le Montant de la mesualite :"<<mens<<endl;
	cout<<"Le Montant de la Derniere mesualite :"<<d_mens<<endl;
	cout<<"Le Nombre de mesualites restants :"<<r_mens<<endl;
}

societe::societe(string a)
{
	nom=a;
	lc=new Client* [100];
	nl=0;
}


void societe::operator+=(Client* a){
	lc[nl]=a;
	nl++;
}

string societe::operator[](string a)
{
	for (int i=0;i<nl;i++)
	{
		if(!lc[i]->ver_credi())
		{
			if(lc[i]->get_numch()== a)
			return lc[i]->get_nom();
		}
	}
	
	return "";
}

float societe::mon(){
	
	float som=0;
	
	for (int i=0;i<nl;i++)
	{
		som+=lc[i]->get_mont();
	}
	
	return som;
}

societe::societe(societe& a)
{
	nom=a.nom;
	nl=0;
	for (int i=0;i<a.nl;i++)
	{
		if(a.lc[i]->ver_credi())
		{
			if(a.lc[i]->get_menr() != 0)
			  {
			  	lc[nl]=a.lc[i];
			  	nl++;
			  }
		}
	}
	
}
