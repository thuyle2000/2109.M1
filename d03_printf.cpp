#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve cach su dung ham printf() de xuat thong bao/du lieu trong ct len man hinh

int main(){
	printf("* * * Demo ve ham printf() * * * \n");
	
	int a = 10, b=25;
	float f = 12.23456;
	
	//khai bao bien bo nho kieu ky tu - ch
	char ch = 'n';		
	
	//khai bao bien chuoi ky tu - tenSV (dat trong cap dau nhay doi)
	char tenSV[30] = "Nguyen Anh Vu";
	
	
	printf("KET QUA SAI : a = %d, b=%d, a+b =%d \n");
	printf("KET QUA SAI : f = %d \n", f);
	printf("KET QUA SAI : a = %f \n\n", a);
	
	printf("a = %d, b=%d, a+b =%d \n", a, b, a+b);
	printf("f = %f \n", f);
	printf("ky tu ch = %c \n", ch);
	printf("ho ten sinh vien = %s \n", tenSV);
}


