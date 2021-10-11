#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// vidu demo ve lap trinh ham don gian
// viet chuong trinh ham tinh cong 2 so nguyen - version 2

//khai bao ham
void add2Num(int a, int b);


int main(){
	int x,y;
	
	printf("nhap so nguyen thu 1 : ");
	scanf("%d", &x);
	
	printf("nhap so nguyen thu 2: ");
	scanf("%d", &y);		
	
	//goi ham add2Num(int a, int b) de thuc hien phep cong x va y
	add2Num(x, y);
	
}
	
/*
day la code dinh nghia ham thuc chuc nang cong 2 so nguyen
- ten ham: add2Num
- doi so: 2 doi so kieu so nguyen
- kieu cua ham : ko co (void)
*/
void add2Num(int a, int b)
{
	printf("Ham cong co 2 doi so nguyen - version 2 \n");
	printf(">> %d + %d = %d \n", a, b, a+b);
	
}


