#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int basic,daper;
	char name[10];
	float bonper,loandet,salary;

	printf("name of employee: ");
	gets(name);

	basic=1200;
	daper=55;
	bonper=33.33;
	loandet=250.00;

	salary= basic + basic * daper/100 + bonper * basic/100 - loandet;
	printf("\n >> name of employee: %s",name);
	printf("\n >> basic salary of employee= %d",basic);
	printf("\n >> actual salary of employee= $%f",salary);



}

