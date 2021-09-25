#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//demo cac phep toan 1 ngoi (unary operator)
	
	//khai bao bien bo nho, [x], co kieu so nguyen va gan = -6
	int x = -6;
	
	//in ra man hinh cac gia tri cua x, ket hop cac phep toan -, ++, --
	printf("x = %d \n", x);
	
	//khai bao bien [y] va gan cho y = -x (phep toan lay so doi)
	int y = -x;
	printf("\n\n y = -x \n");
	printf(" y = %d \n", y);
	
	//khai bao bien [z] va gan z = y++;
	int z = y++; // tuong duong 2 cau lenh : z = y; y = y+1
	printf("\n\n z = y++ \n"); 
	printf(" z = %d \n", z);
	printf(" y = %d \n", y);	
	
	z = ++y;		// tuong duong 2 cau lenh : y = y+1; z = y; 
	printf("\n\n z = ++y \n");
	printf(" z = %d \n", z);
	printf(" y = %d \n", y);
	
	
	//khai bao bien [w] va gan w = y--;
	int w = y--; // tuong duong 2 cau lenh : w = y; y = y-1
	printf("\n\n w = y-- \n"); 
	printf(" w = %d \n", w);
	printf(" y = %d \n", y);	
	
	w = --y;		// tuong duong 2 cau lenh : y = y-1; w = y; 
	printf("\n\n w = --y \n");
	printf(" w = %d \n", w);
	printf(" y = %d \n", y);
	
}


