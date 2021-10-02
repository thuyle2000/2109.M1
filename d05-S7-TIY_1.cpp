#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a,b;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	if(a%b==0) {
		printf(">> so a chia het cho b");
	}
	else {
		printf(">> so a khong chia het cho b");
	}
}
