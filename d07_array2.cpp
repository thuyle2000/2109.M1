#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//vi du demo ve mang so nguyen - version 2

int main(){
	int a[5]; //khai bao mang so nguyen a co 5 phan tu
	
	//khoi tao gia tri cho 5 phan tu cua mang a
	a[0] = 10;
	a[1] = 20;
	a[2] = 100;
	a[3] = 50;
	a[4] = 40;
	
	//in du lieu cua mang a[] ra man hinh
	for(int i=0; i<5; i++){
		printf("a[%d] = %d \n", i, a[i] );
	}

	
}


