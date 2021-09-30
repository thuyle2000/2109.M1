#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ham nhap xuat cac chuoi ky tu gets(), puts()
int main(){
	//khai bao bien chuoi ky tu [tenSV], luu duoc 30 ky tu
	char tenSV[31];
	
	printf("Vui long nhap ho ten : ");	
	gets(tenSV);	// tuong duong lenh scanf("%[^\n]s", tenSV);
	
//	printf("\n >> Ho ten sinh vien: %s \n", tenSV);
	puts(" \n >> Ho ten sinh vien: ");
	puts(tenSV);
		
}


