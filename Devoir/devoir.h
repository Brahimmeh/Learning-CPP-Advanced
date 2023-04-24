#include<iostream>
#include<exception>
#include<string>
using namespace std;

class Error : public exception
{
	char* err;
	
	public:
		Error(char*);
		
		const char * what () const throw () {
	      return err;
	   }
	     
};
class Publication
{
	int id_compte,id_pub,nbr_j,nbre_c;
	
	public:
		Publication();
		Publication(int,int,int,int);
		virtual void show();
		virtual int get_jaime();
		virtual int get_id();
		virtual int is_photo();
		virtual int get_pht();
};

class photo : public Publication
{
	int nbr_ph;
	
	public:
		photo();
		photo(int,int,int,int,int);
		void show();
		int is_photo();
};

class video : public Publication
{
	int nbr_vue,duree;
	
	public:
		video();
		video(int,int,int,int,int,int);
		void show();
		float performence();
		int is_photo();
};
