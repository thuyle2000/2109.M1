#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("___This program will reverse the array you enter___(version 2) \n \n");

	int n;
	printf("How many number do you want to enter?: ");
	scanf("%d",&n);

	int ar[n], temp;
	for(int i = 0; i < n; i++) {
		printf("Enter num %d: ", i+1);
		scanf("%d",&ar[i]);
	}

	for(int i = 0, j=n-1; i <= n/2; i++, j--) {
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
	}

	printf("\nReversed Array: \n");

	for(int i = 0; i < n; i++) {
		printf("%d \n", ar[i]);
	}
}
