#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int num1, num2, sum = 0;
	printf("Enter 1st number: ", num1);
	scanf("%d", &num1);
	printf("Enter 2nd number: ", num2);
	scanf("%d", &num2);
	for(int i=num1; i<=num2; i++) {
		if(i%2 == 1) {
			printf("%d  ", i);
			sum = sum + i;
		}
	}
	printf("\n Tong cac so le giua %d va %d : %d", num1, num2, sum);
}

