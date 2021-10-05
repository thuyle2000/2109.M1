#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tim so lon nhat giua 3 so a, b, c- version 2
int main() {
	float a, b, c;
	float max;
	
	printf("Vui long nhap 3 so bat ky: \n");
	
	printf("a= ", a);
	scanf("%f", &a);
	printf("b= ", b);
	scanf("%f", &b);
	printf("c= ", c);
	scanf("%f", &c);
	
	if(a==b && a==c){
		printf("ba so bang nhau");
	}
	else{
		max = (a > b) ? a : b ;
		max = (max > c) ? max : c; 
		printf("%.3f la so lon nhat !", max);		
	}
	
	
}
