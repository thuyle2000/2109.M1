#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float v, h,Pi,r; // khai bao bien h la chieu cao, v la the tich, r la ban kinh
	Pi=3.14;
	printf(" nhap h="); 	scanf("%f", &h);
	printf("\n nhap r=");	scanf("%f", &r);
	
	v=Pi*h*(r*r);
	printf("\n the tich v= %f",v);
	return 0;
}
