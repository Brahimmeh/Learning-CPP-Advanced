#include<iostream>
#include<string>
#include<exception>
using namespace std;

class ErreurRatio : public exception{
	
	char* err;
	
	public:
		ErreurRatio(char*);
		
		const char * what () const throw () {
	      return err;
	   }
	     
};

class ratio {
	int a,b;
	
	public:
		ratio(int,int);
		void set_d(int);
		int get_d();
		void aff();
};
