#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo ve vong lap FOR
//in ra 5 dong thong bao "Day la chuong trinh C" ra man hinh
int main() {
	
	for(int i=0; i<5; i++) {
		printf("%2d. Day la chuong trinh C \n", i );
	}
	
	printf("\n");	
	for(int i=1; i<6; i++) {
		printf("%2d. Day la chuong trinh C \n", i );
	}

	printf("\n");
	for(int i=0; i<5; i++) {
		printf("%2d. Day la chuong trinh C \n", i+1 );
	}
}


