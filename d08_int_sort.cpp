#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// demo sap xep day so nguyen.

int main() {
	int n;
	while(1) {
		printf(" vui long nhap n [3-10] : ");
		scanf("%d", &n);
		if(n>=3 && n<=10) {
			break;
		}
		printf(" >> du lieu ko hop le, vui long nhap lai ! \n\n");
	}
	
	
	int a[n];	// khai bao mang so nguyen a[] gom n-phan tu
	
	//1. vong lap nhap n so nguyen vo mang a[]
	for(int i=0; i<n; i++){
		printf(" >> nhap so nguyen thu %d : ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n");
	
	//2. in day so vua nhap ra man hinh
	printf("* * * Day so vua nhap * * * \n");
	for(int i=0; i<n; i++){
		printf("%2d. %d \n", i+1, a[i]);
	}
	
	//3. sap xep lai thu tu cac so nguyen trong mang a[]
	int temp;
	for(int i=0; i<n-1; i++){
		for(int k=i+1; k<n; k++){
			if(a[i] < a[k]){
				temp = a[i];
				a[i] = a[k];
				a[k] = temp;
			}
		}
	}
	
	printf("\n\n");
	
	//4. in lai day so sau khi xep thu tu cao den thap ra man hinh
	printf("* * * Day so sau khi xep thu tu giam dan * * * \n");
	for(int i=0; i<n; i++){
		printf("%2d. %d \n", i+1, a[i]);
	}	
}


