#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void s17_1();
void s17_2();

int main() {

	char op;

	while(1) {
		printf("\n MENU - Assignment Session 17 \n");
		printf("1. S17. 1 \n");
		printf("2. S17. 2 \n");
		printf("3. Exit  \n");
		printf(" Enter your choice [1-3]: ");
		
		fflush(stdin);
		op = getchar();

		switch(op) {
			case '1':
				s17_1();
				break;
			case '2':
				s17_2();
				break;
			case '3':
				exit(0);
			default:
				printf(">> Wrong choice ! \n\n");
		}
	}

}



void s17_2() {
	int n, i;
	printf("Enter the numbers of elements: ");
	scanf("%d", &n);

	while (n > 100 || n < 1) {
		printf("Error! number should in range of (1 to 100).\n");
		printf("Enter the number again: ");
		scanf("%d", &n);
	}

	float num[n], sum = 0, avg=0;

	for (i = 0; i < n; ++i) {
		printf("%d. Enter number: ", i + 1);
		scanf("%f", &num[i]);
		sum = sum + num[i];
	}

	avg = sum / n;
	printf("Average = %.2f \n\n", avg);
}

void s17_1() {
	char s1[50];
	char s2[50];

	fflush(stdin);
	printf("Please enter the string 1: ");
	gets(s1);
	printf("Please enter the string 2: ");
	gets(s2);
	printf("\n");

	int n1 = strlen(s1);
	int n2 = strlen(s2);
	for(int i= n1-1, j = n2-1; i >= 0; i--, j--) {
		if(s1[i] != s2[j]) {
			printf("string 1 is not at the end of string 2 \n\n");
			return;
		}
	}
	printf("string 1 is at the end of string 2 \n\n");
}
