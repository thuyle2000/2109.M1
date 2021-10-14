#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo thuat toan sap xep bubble sort
int main(){
	int a[5] = {23, 90, 9, 25, 16};
	
	printf("Day so chua duoc xep thu tu: \n");
	int n = 5;
	for(int i=0; i<n; i++ ){
		printf(" %4d", a[i]);
	}
	
	printf("\n\n");
	
	int temp;
	
	//thuat toan sap xep bubble sort 
	for(int i=0; i<n-1; i++){
		//for-I tim ra so nho nhat thu i
		
		for(int j=n-1; j>i; j--){
			if(a[j]<a[j-1]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	} // ket thuc for-I
	
		
	printf("Day so da duoc xep thu tu: \n");
	for(int i=0; i<n; i++ ){
		printf(" %4d", a[i]);
	}
}


