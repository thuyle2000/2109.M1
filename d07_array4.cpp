#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//vi du demo ve mang so nguyen - version 4

int main(){
	//khai bao mang so nguyen a co 5 phan tu 
	int a[5] ; 
	
	//viet vong lap - khoi gan gia tri cho 5 phan tu 
	for(int i=0; i<5; i++){
		printf("nhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n");
	
	//in du lieu cua mang a[] ra man hinh
	for(int i=0; i<5; i++){
		printf("a[%d] = %d \n", i, a[i] );
	}

	
}


