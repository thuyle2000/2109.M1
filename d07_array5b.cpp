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
	printf("\n\n");
	
	//khai bao mang so nguyen a co n-phan tu 
	int a[n] ; 
	
	//viet vong lap - khoi gan gia tri cho n phan tu 
	for(int i=0; i<n; i++){
		printf(" nhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n");
	
	int max = a[0];
	int sum = 0;
	
	//vong lap FOR, duyet tung phan tu trong mang de tinh tong cac so va tim so lon nhat
	for(int i=0; i<n; i++){
		sum += a[i];  	// tuong duong lenh sum= sum + a[i];
		max = (max>a[i]) ? max : a[i];
	}
	
	//in ra so lon nhat, tong cac gia tri va gia tri binh quan
	printf(">> so lon nhat  : %d \n", max);
	printf(">> tong gia tri : %d \n", sum);
	printf(">> gia tri binh quan : %.2f \n", (float)sum/n);

	
}


