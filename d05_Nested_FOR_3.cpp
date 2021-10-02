#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve Nested FOR
//vi du ve hinh tam giac ngoi sao 
//cu the, chung ta ve 1 hinh tam giac vuong co 5 dong
int main(){
	
	printf("* \n");
	printf("* * \n");
	printf("* * * \n");
	printf("* * * * \n");
	printf("* * * * * \n");
	
	printf("\n\n");	
	int n;
	printf("nhap vao so dong muon in: ");
	scanf("%d", &n);

	//Vong lap i - dieu khien so dong duoc in	
	for(int i = 0; i<n; i++){
		//vong lap j - dieu khien viec in so ngoi sao tren 1 dong
		for(int j=0; j<=i; j++ ){
			printf("* ");
		}
		printf("\n");
	}
	
}

