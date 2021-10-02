#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a,b,c;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	c=a-b;
	if(c==b || c==a) {
		printf("Hieu (a-b) [%d] bang voi mot gia tri so duoc nhap \n", c);
	}
	else if(c==a) {
		printf("Hieu (a-b) [%d] khong bang voi bat cu gia tri nao duoc nhap \n", c);
	}

}

