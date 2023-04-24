#include"ratio.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	try{
		ratio a(2,9);
		a.set_d(2);
		a.aff();
	}
	
	catch(ErreurRatio e)
	{
		cout<<e.what()<<endl;
	}
	

	return 0;
}
