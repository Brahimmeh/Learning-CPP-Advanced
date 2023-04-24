#include"date.h"



int main(int argc, char** argv) {
	date d(21,2,1997);
	d.dayplus(450);
	d.afficher();
	
	
	dateheure d1(25,2,1963,12,34,55);
	d1.secplus(344676878);
	d1.afficher();
	
	
}
