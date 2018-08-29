#include <iostream>
#include "Duck.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Ffly *f1=new FflyNoway;
	Duck d1(f1);
	f1->fly(); 
	return 0;
}
