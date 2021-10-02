#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a,b;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	if(a*b>=1000) {
		printf("tich cua a nhan b lon hon 1000");
	} else {
		printf("tich cua a nhan b nho hon 1000");
	}
}
