#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo vong lap FOR
//in ra tong cua n-so nguyen dau tien, 
// cu the - neu n=5 => in tong cua 1+2+3+4+5 = ?, 
//          neu n=7 => in tong cua 1+2+3+4+5+6+7 = ?

int main(){
	int n;
	
	printf(">> nhap so nguyen duong N: ");
	scanf("%d", &n);
	
	int sum=0;
	//de tinh tong cua n-so nguyen dau tien, dung vong lap FOR
	for(int i=1; i<=n; i++){
		sum = sum+n;
	}
	
	printf("\n >> Tong cua %d-so nguyen dau tien = %d \n" , n, sum );
	
}


