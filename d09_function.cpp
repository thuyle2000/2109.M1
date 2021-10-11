#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vidu demo ve lap trinh ham don gian
// viet chuong trinh ham tinh cong 2 so nguyen 

//khai bao ham add2Num();
void add2Num();

int main(){
	
	//goi ham add2Num(), de ham nay thuc hien chuong trinh cong 2 so
	add2Num();
}


/*
day la code dinh nghia ham thuc chuc nang cong 2 so nguyen
- ten ham: add2Num
- doi so: ko co
- kieu cua ham : ko co (void)
*/
void add2Num()
{
	printf("Ham cong so nguyen - version 1 \n");
	
	int a, b;
	printf("nhap so nguyen a: ");
	scanf("%d", &a);
	
	printf("nhap so nguyen b: ");
	scanf("%d", &b);	
	
	printf(">> %d + %d = %d \n", a, b, a+b);
}

