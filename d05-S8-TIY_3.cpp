#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	float a, b, c;
	printf("Vui long nhap 3 so bat ky: \n");
	printf("a= ", a);
	scanf("%f", &a);
	printf("b= ", b);
	scanf("%f", &b);
	printf("c= ", c);
	scanf("%f", &c);
	
	if( a>b && a>c) 
	{
		printf("a la so lon nhat");
	}
	else if(b>a && b>c)
	{
		printf("b la so lon nhat");
	}
	else if(c>a && c>b)
	{
		printf("c la so lon nhat");
	}
	else{
		printf("ba so bang nhau");
	}
	
}
