#include"ratio.h"

ErreurRatio::ErreurRatio(char* a)
{
	err=a;
}

ratio::ratio(int n, int d)
{
		a=n;
		b=d;
		if(b==0)
	    {
	    	ErreurRatio e("Invalid Denominator \n");
	    	throw e;
		}
}

void ratio::set_d(int p)
{
		b=p;
		if(b==0)
		{
			ErreurRatio e("Invalid Denominator \n");
			throw e;
		}
	
}

int ratio::get_d()
{
	return b;
}

void ratio::aff()
{
	cout<<"Nom "<<a<<endl;
	cout<<"DeNom "<<b<<endl;
}
