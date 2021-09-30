#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float x1 = 123.456789;
	float x2 = 8234;
	printf(" >> Dinh dang so thuc << \n");
	
	printf(" - %%f      : x1 = [%f] \n", x1);
	printf(" - %%f      : x2 = [%f] \n", x2);
	
	printf(" - %%.2f    : x1 = [%.2f] \n", x1);
	printf(" - %%16.2f  : x1 = [%16.2f] \n", x1);
	printf(" - %%016.2f : x1 = [%016.2f] \n", x1);
	
	printf(" - %%g      : x1 = [%g] \n", x1);
	printf(" - %%g      : x2 = [%g] \n", x2);
	
	printf(" - %%e      : x1 = [%e] \n", x1);
	printf(" - %%e      : x2 = [%e] \n", x2);
}


