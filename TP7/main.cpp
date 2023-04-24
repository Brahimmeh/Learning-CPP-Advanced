#include "poly.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	ClientComptant c("d","d",33434,"dd","ddvff");
	c.aff();
	
	ClientCredit c1("d","d",33434,0,2900,2400);
	c1.aff();
	
	societe s("First");
	s+=(&c);
}
