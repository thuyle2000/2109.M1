#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a, b;

	printf(" Vui long nhap so nguyen thu 1: ");
	scanf("%d", &a);

	printf(" Vui long nhap so nguyen thu 2: ");
	scanf("%d", &b);

	printf(" %d + %d = %d \n", a, b , a+b );
	printf(" %d - %d = %d \n", a, b , a-b );
	printf(" %d * %d = %d \n", a, b , a*b );
	printf(" %d / %d = %d \n\n", a, b , a/b );
	
	printf(" %d & %d = %d \n", a, b , a&b );
	printf(" %d | %d = %d \n", a, b , a|b );
	printf(" %d ^ %d = %d \n", a, b , a^b );	
}


