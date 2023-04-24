#include"date.h"
bool date::check(){
	
	if(j<0 || j>31 || m<0 || m>12 || a<0)
    { 
      	cout<<"La date est invalide"<<endl;
	    return false;
    }
	
	else
	{
		if(  (m==4 || m==6 || m==9 || m==11) && j>30 )
		{
		   cout<<"Ce mois contient un nombre de jour <30"<<endl;
		   return false;
	    }
		
		else if (m==2)
		{
			if (j>29)
			{
			   cout<<"Le mois Fevrier ne contient pas plus de 29 jours"<<endl;
			   return false;
		    }
			
			else if ( (!(a%4==0 && a%100!=0 || a%400==0)) && j>28)
			{
			  cout<<"Cette annee n'est pas bisextile le nombre de jour du Fevrier doit etre <= 28"<<endl;
			  return false;
		    }
		}
		
		
		else
		{
			cout<<"Annee Valide !!"<<endl;
			return true;
		}
		
	}
}

date::date()
{
	j=0;
	m=0;
	a=0;
}

date::date(int jo,int mo, int an)
{
	
	j=jo;
	m=mo;
	a=an;

}

void date::afficher()
{
	cout<<"Le "<<setfill('0')<<setw(2)<<j<<"/"<<setw(2)<<m<<"/"<<a<<endl; 
}

void date::affiche()
{
	cout<<"Le "<<setfill('0')<<setw(2)<<j<<" ";
	
	switch(m){
		case 1 :  cout <<"Janvier";
		case 2 :  cout <<"Fevrier";
		case 3 :  cout <<"Mars";
		case 4 :  cout <<"Avril";
		case 5 :  cout <<"Mai";
		case 6 :  cout <<"Juin";
		case 7 :  cout <<"Juillet";
		case 8 :  cout <<"Aout";
		case 9 :  cout <<"Septembre";
		case 10 :  cout <<"Octobre";
		case 11 :  cout <<"Novembre";
		case 12 :  cout <<"Decembre";
	}
	
	cout<<" "<<a;

}



heure::heure() {
	
	h=0;min=0;sec=0;
}

heure::heure(int hr,int mn,int sc)
{
	h=hr;
	min=mn;
	sec=sc;
}

void heure::afficher()
{
	cout<<" "<<setfill('0')<<setw(2)<<h<<" : "<<setw(2)<<min<<" : "<<setw(2)<<sec<<endl;
}

void date::yearplus(int v)
{
	if(v<0)
	cout<<"entrer un nombre postif !!"<<endl;
	else
	a+=v;
}

void date::monthplus(int v)
{
	if(v<0)
	cout<<"entrer un nombre postif !!"<<endl;
	else
	{  
	    m+=v;
		yearplus(m/12);
		m = m%12;	
	}
}

void date::dayplus(int v)
{
	if(v<0)
	cout<<"entrer un nombre postif !!"<<endl;
	
	while(v+j>28)
	{
		if(m==2)
		{
		    if( (!(a%4==0 && a%100!=0 || a%400==0)) )
		    {
		    	v-=28;
		    	monthplus(1);
		    }
		    	
		    else if (v+j>29)
		    {
		    	v-=29;
		    	monthplus(1);
			}
		    
		    else
		      break;
	    }
		
		else if( (m==4 || m==6 || m==9 || m==11) && (v+j>30))
		{
			monthplus(1);
			v-=30;
		}
		
		else if (v+j>31)
		{
			monthplus(1);
			v-=31;
		}
		
		else
		 break;
		
	}
	
	j+=v;	
}


int heure::heureplus(double v)
{
	if(v<0)
	cout<<"entrer un nombre postif !!"<<endl;
	
	
	else
	{
		h+=v;
		int a =h/24;
		h=h%24;
		return a;
	}
}


void heure::minplus(double v)
{
	if(v<0)
	cout<<"entrer un nombre postif !!"<<endl;
	
	
	else
	{
		min+=v;
		heureplus(min/60);
		min=min%60;
		
	}
	
}


void heure::secplus(double v)
{
	if(v<0)
	cout<<"entrer un nombre postif !!"<<endl;
	
	
	else
	{
		sec+=v;
		minplus(sec/60);
		sec=sec%60;
		
	}
	
}

bool heure::check()
{
         if(h<0 || h>23 || min<0 || min>60 || sec<0 || sec>60)
	       return false;
	
	       else
	       return true;
}

dateheure::dateheure() : date(), heure()
{
	
}

dateheure::dateheure(int a,int b,int c,int d,int e,int f): date(a,b,c),heure(d,e,f)
{
	
}

void dateheure::heureplus(double x)
{
	int a= heure::heureplus(x);
	dayplus(a);
}
void dateheure::afficher(){
	date::afficher();
	heure::afficher();
}

bool dateheure::check()
{
	if(date::check() && heure::check())
	return true;
	
	else
	return false;
	
}
