#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	// viet chuong trinh doi nhiet do C sang do F
	
	// khai bao bien bo nho chua gia tri nhiet do C va F
	float C, F;
	
	// gan tri cho bien C
	C = 42.78;
	
	// doi sang do F
	F = (C*9/5) + 32;
	
	// in gia tri cua nhiet do C va F ra man hinh
	printf("Nhiet do C = %f \n", C);
	printf("Nhiet do F tuong duong = %f \n", F); 
}


