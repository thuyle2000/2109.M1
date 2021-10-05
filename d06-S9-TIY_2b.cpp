#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tinh tong cac so le giua 2 so bat ky - version 2
int main() {
	int num1, num2, sum = 0;
	
	printf("Enter 1st number: ", num1);
	scanf("%d", &num1);
	printf("Enter 2nd number: ", num2);
	scanf("%d", &num2);
	
	int start, end;
	start = (num1<num2)? num1 : num2;
	end = (num2>num1)? num2 : num1;
	
	for(int i=start; i<=end; i++) {
		if(i%2 == 1) {
			printf("%d  ", i);
			sum = sum + i;
		}
	}
	
	printf("\n Tong cac so le giua %d va %d : %d", num1, num2, sum);
}

