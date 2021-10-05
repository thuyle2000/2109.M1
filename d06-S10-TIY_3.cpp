#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// in bang cuu chuong

int main() {
	int x;
	printf("nhap x: ", x);
	scanf("%d", &x);
	printf(">> Bang cuu chuong %d : \n", x);
	
	for(int i=1; i<=10; i++) {
		printf("%2d x %2d = %3d \n", x, i, x*i);
	}
}
