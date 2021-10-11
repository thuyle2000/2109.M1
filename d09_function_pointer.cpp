#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//vi du demo ve con tro ham, co the chua dia chi cua ham add(), 
//  sub(), product() 

void add(int a, int b);
void sub(int a, int b);
void product(int a, int b);

int main(){
	//khai bao con tro ham p
	void (*p)(int, int);
	
	int a, b;
	printf(" nhap so thu 1: ");
	scanf("%d", &a);
	
	printf(" nhap so thu 2: ");
	scanf("%d", &b);
	
	p = add;
	p(a,b);
	
	p = sub;
	p(a,b);
		
	p = product;	
	p(a,b);	
	
}

void add(int a, int b)
{
	printf(" >> %d + %d = %d \n", a, b, a+b);
}


void sub(int a, int b)
{
	printf(" >> %d - %d = %d \n", a, b, a-b);
}

void product(int a, int b)
{
	printf(" >> %d * %d = %d \n", a, b, a*b);
}

