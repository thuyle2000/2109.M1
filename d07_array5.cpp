#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//vi du demo ve mang so nguyen - version 5

int main(){
	
	int n;
	
	while(1){
		printf(" nhap so phan tu [3-10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) {
			break;
		}
	}
	
	
	//khai bao mang so nguyen a co n-phan tu 
	int a[n] ; 
	
	//viet vong lap - khoi gan gia tri cho n phan tu 
	for(int i=0; i<n; i++){
		printf("nhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n");
	
	//in du lieu cua mang a[] ra man hinh
	for(int i=0; i<n; i++){
		printf("a[%d] = %d \n", i, a[i] );
	}

	
}


