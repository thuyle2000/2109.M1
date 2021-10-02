#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve Nested FOR
//vi du ve hinh chu nhat ngoi sao 
//cu the, chung ta ve 1 hinh chu nhat co 5 dong, moi dong in ra 7 ngoi sao
int main(){
	
	for(int i = 0; i<5; i++){
		printf("* * * * * * * \n");
	}
	
	
	printf("\n\n");	
	int n, m;
	printf("nhap vao so dong muon in: ");
	scanf("%d", &n);
	printf("nhap vao so ngoi sao tren moi dong: ");
	scanf("%d", &m);	
	
	for(int i = 0; i<n; i++){
		for(int j=0; j<m; j++ ){
			printf("* ");
		}
		printf("\n");
	}
	
}

