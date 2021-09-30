#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int dai, rong, chuVi, dienTich;
	printf("\n nhap chieu dai = ");
	scanf("%d", &dai);
	printf("\n nhap chieu rong = ");
	scanf("%d", &rong);
	
	chuVi=(dai+rong)*2;
	dienTich=dai*rong;
	printf("\n chuVi= %d \n",chuVi);
	printf("\n dienTich= %d \n",dienTich);
}

