#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//demo cac phep toan so hoc- version 2
	int a, b;

	//viet lenh cho phep nguoi chay chuong trinh nhap du lieu vo bien a, b
	printf("nhap gia tri cho a: ");
	scanf("%d", &a);

	printf("nhap gia tri cho b: ");
	scanf("%d", &b);

	printf("a = %d, b= %d \n", a, b );
	printf("%d + %d = %d \n", a, b, a+b);
	printf("%d - %d = %d \n", a, b, a-b);
	printf("%d * %d = %d \n", a, b, a*b);
	printf("%d / %d = %d \n", a, b, a/b);
	printf("%d %% %d = %d \n", a, b, a%b);
}


