#include"date.h"



int main(int argc, char** argv) {
	date d(21,2,1997);
	d.dayplus(450);
	d.afficher();
	
	dateheure d2(23,4,2020,3,21,45);
	d2.afficher();
	
	
}
