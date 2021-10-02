#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int x,y;
	printf("nhap so x:");
	scanf("%d",&x);
	printf("nhap so y:");
	scanf("%d",&y);


	if(x<=2000 || x>=3000) {
		printf("x (%d) la gia tri hop le ! \n", x);
	} else {
		printf("x (%d) KHONG HOP LE !!! \n", x);
	}

	if(y>=100 && y<=500) {
		printf("y (%d) la gia tri hop le ! \n", y);
	} else {
		printf("x (%d) KHONG HOP LE !!! \n", x);
	}
}
