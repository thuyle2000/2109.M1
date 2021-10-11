#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


// vidu demo ve lap trinh ham don gian
// viet chuong trinh ham tinh cong 2 so nguyen - version 3

//khai bao ham - function prototype
int add2Num(int a, int b);

int main(){
	int x,y;
	
	printf("nhap so nguyen thu 1: ");
	scanf("%d", &x);
	
	printf("nhap so nguyen thu 2: ");
	scanf("%d", &y);		
	
	//goi ham int add2Num(int a, int b) de thuc hien phep cong x va y
	int z = add2Num(x, y);  //x va y : goi la tham so thuc te 
	printf(">> %d + %d = %d \n", x, y, z);
	
	int z2 = add2Num(z, 100);		//z va 100 : la tham so thuc te
	printf(">> %d + %d = %d \n", z, 100, z2);
	
	printf(">> Can bac 2 cua %d = %.2f \n", z2, sqrt(z2) );
}
	
/*
day la code dinh nghia ham thuc chuc nang cong 2 so nguyen
- ten ham: add2Num
- doi so: 2 doi so kieu so nguyen int
- kieu cua ham: int (ket qua cua phep cong 2 so)
*/
int add2Num(int a, int b)   // a va b tham so hinh thuc
{
	printf("Ham cong co 2 doi so nguyen - version 3 \n");
	
	return a+b;
}


