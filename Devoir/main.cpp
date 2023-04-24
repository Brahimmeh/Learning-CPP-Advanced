#include "devoir.h"
#include<vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	

	
	try{
		vector<Publication*> v;
		video v1(1450,01,40,20,200,50);
		video v2(8450,02,12,5,100,15);
		photo p1(1450,03,40,140,9);
		v.push_back(&v1);
		v.push_back(&v2);
		v.push_back(&p1);
	
			int a,b,c,d,e;
			cout<<"--------AJOUT D'UNE PUBLICATION--------"<<endl;
			cout<<"Entrer l'id Compte :"<<endl;
			cin>>a;
			cout<<"Entrer l'id Publication :"<<endl;
			cin>>b;
			cout<<"Entrer le Nombre des J'aime :"<<endl;
			cin>>c;
			cout<<"Entrer le Nombre de Compte :"<<endl;
			cin>>d;
			cout<<"Entrer le Nombre de Photos Partagees :"<<endl;
			cin>>e;
			
			for(int i=0;i<v.size();i++)
			{
				if(v[i]->get_id()==a)
				{
					Error er("Error: ID is Unique");
					throw er;
				}
			}
			
			photo pb(a,b,c,d,e);
			v.push_back(&pb);
			
			cout<<"---------AFFICHAGE DU TABLEAU------------"<<endl;
			for(int i=0;i<v.size();i++)
			{
				v[i]->show();
			}
			
			cout<<"---------AFFICHAGE DU MELLEUR COMPTE------------"<<endl;
			float max=(float)v[0]->get_jaime()/v.size();
			float m;
			int ind;
			
			for(int i=1;i<v.size();i++)
			{
				m=(float)v[i]->get_jaime()/v.size();
				
				if(m>max)
				{
					max=m;
					ind=i;
				}
			}
			cout<<"L'id Du Meuilleur Compte :"<<v[ind]->get_id()<<endl;
		
			cout<<"---------AFFICHAGE DU NOMBRE TOTALE DE PHOTOS PARTAGEES------------"<<endl;
			int cpt=0;
				for(int i=0;i<v.size();i++)
				 cpt+=v[i]->is_photo();
				
			cout<<"Le nombre Totale des Photos Partages est : "<<cpt<<endl;
	}
	catch(Error e)
	{
		cout<<e.what()<<endl;
	}
	
}
