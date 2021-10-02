#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve Nested FOR
//vi du ve hinh chu nhat hoac hinh vuong ngoi sao 
// cu the, chung ta ve 1 hinh vuong co 5 dong, moi dong in ra 5 ngoi sao
int main(){
	
	for(int i = 0; i<5; i++){
		printf("* * * * * \n");
	}
	
	
	printf("\n\n");	
	int n;
	printf("nhap vao so dong muon in: ");
	scanf("%d", &n);
	
	for(int i = 0; i<n; i++){
		for(int j=0; j<n; j++ ){
			printf("* ");
		}
		printf("\n");
	}
}


